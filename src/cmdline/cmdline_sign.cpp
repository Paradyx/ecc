#include "cmdline/cmdline_sign.hpp"

#include "docopt.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "keys.hpp"
#include "messages.hpp"

namespace cmdline {
  static const char USAGE_SIGN[] =
  R"(Usage: ecc sign [-h] [--key=<keyfile>] [--input=<inputfile>]

    Options:
      -h --help     Show this screen.
      -k <keyfile> --key=<keyfile>  file that contains the private key [default: /tmp/id_m511]
      -i <inputfile> --input=<inputfile>  file that contains the message to sign [default: /tmp/message.txt]
  )";

  void cmdline_sign(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_SIGN,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
    std::string inputfile_s = subargs["--input"].asString();
    std::string keyfile_s = subargs["--key"].asString();

    size_t size;
    char input_c[64], key_c[64];
    std::ifstream inputfile(inputfile_s, std::ios::binary);
    if (inputfile.is_open()){
      inputfile.seekg (0, std::ios::end);
      size = inputfile.tellg();
      if (size > 64) {
        std::cout << "Message to big, cutting down\n";
      } else if (size < 64) {
        std::cout << "Message to small, filling with zeros\n";
      }
      inputfile.seekg (0, std::ios::beg);
      inputfile.read (input_c, 64);
      inputfile.close();
    } else std::cerr << "ERROR: unable to open inputfile\n";

    Plaintext plaintext;
    plaintext.frombytes((const unsigned char*)input_c);

    std::ifstream keyfile(keyfile_s, std::ios::binary);
    if (keyfile.is_open()){
      keyfile.seekg (0, std::ios::end);
      size = keyfile.tellg();
      if (size != 64) std::cerr << "ERROR: Wrong keysize: " << size << "\n";
      keyfile.seekg (0, std::ios::beg);
      keyfile.read (key_c, size);
      keyfile.close();
    } else std::cerr << "ERROR: unable to open keyfile\n";

    Private_Key sk;
    sk.frombytes((const unsigned char*)key_c);

    Signature signature;
    signature = plaintext.sign(sk);

    std::string sig;
    sig = signature.enc();

    std::string outputfile_s = inputfile_s + ".sig";
    std::ofstream outputfile(outputfile_s);
    outputfile << sig;
    outputfile.close();
  }
}
