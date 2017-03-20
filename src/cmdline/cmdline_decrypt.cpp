#include "cmdline/cmdline_decrypt.hpp"

#include "docopt/docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_DECRYPT[] =
  R"(Usage: ecc decrypt [--help]

    Options:
      -h --help     Show this screen.
  )";

  void cmdline_decrypt(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_DECRYPT,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  }
}
