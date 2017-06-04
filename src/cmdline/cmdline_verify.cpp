#include "cmdline.hpp"

#include "docopt.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "messages.hpp"
#include "keys.hpp"
#include "debug.hpp"

namespace cmdline {
  static const char USAGE_VERIFY[] =
  R"(Usage: ecc verify [-h] [--key=<keyfile>] [--input=<inputfile>] [--signature=<signaturefile>]

    Options:
      -h --help     Show this screen.
      -k <keyfile> --key=<keyfile>  file that contains the public key [default: /tmp/id_m511.pub]
      -i <inputfile> --input=<inputfile>  file that contains the message to sign [default: /tmp/message.txt]
      -s <signaturefile> --signature=<signaturefile>  file that contains a signature [default: /tmp/message.txt.sig]
  )";

  void cmdline_verify(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_VERIFY,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first

    std::string inputfile_s = subargs["--input"].asString();
    std::string pubkeyfile_s = subargs["--key"].asString();
    std::string sigfile_s = subargs["--signature"].asString();

    std::cout << inputfile_s << std::endl;
    std::cout << pubkeyfile_s << std::endl;
    std::cout << sigfile_s << std::endl;

    Debug::Write("Reading message from file");
    size_t size;
    char input_c[64]={0};
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

    char pubkey_c[128] = {0};
    Debug::Write("Reading public key from file");
    std::ifstream pubkeyfile(pubkeyfile_s, std::ios::binary);
    if (pubkeyfile.is_open()){
      pubkeyfile.seekg (0, std::ios::end);
      size = pubkeyfile.tellg();
      if (size != 128) std::cerr << "ERROR: Wrong keysize: " << size << "\n";
      pubkeyfile.seekg (0, std::ios::beg);
      pubkeyfile.read (pubkey_c, size);
      pubkeyfile.close();
    } else std::cerr << "ERROR: unable to open publickeyfile\n";

    Public_Key pk;
    pk.frombytes((const unsigned char*)pubkey_c);

    Debug::Write("Reading Signature file");
    std::string sig;
    std::ifstream sigfile(sigfile_s, std::ios::in);
    if (sigfile.is_open()){
      getline (sigfile,sig);
      sigfile.close();
    } else std::cerr << "ERROR: unable to open signature file\n";

    Debug::Write("Decoding Signature");
    Signature signature;
    signature.dec(sig);

    if (plaintext.verify(signature, pk)){
      std::cout << "Signature correct" << std::endl;
    } else {
      std::cout << "Signature incorrect" << std::endl;
    }
  }
}
