#include "cmdline/cmdline_keygen.hpp"

#include "docopt.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "debug.hpp"
#include "m511/m511_keygen.hpp"

namespace cmdline {
  static const char USAGE_KEYGEN[] =
  R"(Generate randomly a new secret and public key.

  Usage: ecc keygen [-h] [--output=FILE]

    Options:
      -d --debug              show debug informations
      -h --help               show this screen.

      -o FILE, --output=FILE  store key pair at FILE [default: ./id_m511]
  )";

  void cmdline_keygen(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_KEYGEN,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first

  for(auto const& arg : subargs){
    std::cout << arg.first <<  arg.second << std::endl;
  }
  std::string filename = subargs["--output"].asString();

  std::string pk;
  std::string sk;

  pk = m511_keygen(&sk);

  //TODO Format keys in a usefull way.
  std::ofstream f_privatekey(filename);
  f_privatekey << pk << sk;
  f_privatekey.close();

  std::ofstream f_publickey(filename+".pub");
  f_publickey << pk;
  f_publickey.close();
  }
}