#include "cmdline/cmdline_encrypt.hpp"

#include "docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_ENCRYPT[] =
  R"(Usage: ecc encrypt [-h] --key <file> --message <file>

    Options:
      -h --help                   show this screen
      -k <file> --key=<file>      provide the public key for the encryption
      -m <file> --message=<file>  encrypt a MESSAGE, as string
  )";

  void cmdline_encrypt(std::vector<std::string> args){
    std::map<std::string, docopt::value> subargs
          = docopt::docopt(USAGE_ENCRYPT,
                          args, //generate argument array automatically
                          true, // show help if requested
                          "", // version string
                          false); //options_first
  }

}
