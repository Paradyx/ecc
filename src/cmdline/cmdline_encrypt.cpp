#include "cmdline/cmdline_encrypt.hpp"

#include "docopt.h"
#include <string>
#include <vector>

namespace cmdline {
  static const char USAGE_ENCRYPT[] =
  R"(Usage: ecc encrypt [-h] --key KEYFILE [--file FILE | --message MESSAGE]

    Options:
      -h --help       show this screen

      -k key          provide the public key for the encryption

      Alternative message input. [Default: stdin]
      -m --message    encrypt a MESSAGE, as string
      -f --file FILE  encrypt a FILE
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
