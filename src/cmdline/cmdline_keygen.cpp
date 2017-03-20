#include "cmdline/cmdline_keygen.hpp"

#include "docopt/docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_KEYGEN[] =
  R"(Generate randomly a new secret and public key.

  Usage: ecc keygen [-h] [-d] [--output]

    Options:
      -d --debug        show debug informations
      -h --help         show this screen.

      -o --output FILE  store key pair at FILE [default: ./id_m511]
  )";

  void cmdline_keygen(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_KEYGEN,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  }

}
