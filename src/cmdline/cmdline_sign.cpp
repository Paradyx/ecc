#include "cmdline/cmdline_sign.hpp"

#include "docopt.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "keys.hpp"
#include "messages.hpp"
#include "debug.hpp"

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

    Debug::Write("Reading message from file");
    size_t size;
    char input_c[64]={0}, key_c[64] = {0};
    std::ifstream inputfile(inputfile_s, std::ios::binary);
    if (inputfile.is_open()){
      inputfile.seekg (0, std::ios::end);
      size = inputfile.tellg();
      inputfile.seekg (0, std::ios::beg);
      std::cout << "Size of input: " << size << std::endl;
      if (size >= 64) {
        std::cout << "Message to big, cutting down\n";
        inputfile.read (input_c, 64);
      } else if (size < 64) {
        std::cout << "Message to small, filling with zeros\n";
        inputfile.read (input_c, size);
      }
      inputfile.close();
    } else std::cerr << "ERROR: unable to open inputfile\n";

    Plaintext plaintext;
    plaintext.frombytes((const unsigned char*)input_c);

    Debug::Write("Reading key from file");
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

    Debug::Write("Signing message");
    Signature signature;
    signature = plaintext.sign(sk);

    Debug::Write("Encoding Signature");
    std::string sig;
    sig = signature.enc();
    std::cout << sig << std::endl;

    Debug::Write("Writing Signature to file");
    std::ofstream outputfile(inputfile_s + ".sig");
    outputfile << sig;
    outputfile.close();
  }
}
