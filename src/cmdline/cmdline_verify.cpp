#include "cmdline/cmdline_verify.hpp"

#include "docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_VERIFY[] =
  R"(Usage: ecc verify [-h]

    Options:
      -h --help     Show this screen.
  )";

  void cmdline_verify(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_VERIFY,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  }
}
