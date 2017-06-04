#include "cmdline.hpp"

#include "docopt.h"
#include <vector>
#include <string>
#include <iostream>

namespace cmdline {
  static const char USAGE_VERIFY[] =
  R"(Usage: ecc test [-h]

    Options:
      -h --help     Show this screen.
  )";

  void cmdline_test(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_VERIFY,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  std::cout << "TESTING" << std::endl;
  }
}
