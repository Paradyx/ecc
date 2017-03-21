#include "cmdline/cmdline_sign.hpp"

#include "docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_SIGN[] =
  R"(Usage: ecc sign [--help]

    Options:
      -h --help     Show this screen.
  )";

  void cmdline_sign(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_SIGN,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  }
}
