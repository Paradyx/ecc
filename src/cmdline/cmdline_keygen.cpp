#include "cmdline/cmdline_keygen.hpp"

#include "docopt/docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_KEYGEN[] =
  R"(Usage: ecc keygen [-h] [-d] [--random] [--output]

    Options:
      -d --debug        show debug informations
      -h --help         show this screen.

      -o --output FILE  store key pair at FILE [default: ./id_m511]
      -r --random POOL  specify entropy pool [default: /dev/random]

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
