#include "cmdline.hpp"

#include "docopt.h"
#include <vector>
#include <string>
#include <iostream>

#include "test/test.hpp"

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
  test_fe_equal();
  test_fe_notequal();
  test_fe_to1();
  test_fe_to0();
  test_fe_add_commutativity();
  test_fe_add_associativity();
  test_fe_cswap();
  test_fe_mul_commutativity();
  test_fe_mul_associativity();
  test_fe_invert();
  test_fe_distributivity();

  test_scalar_equal();
  test_scalar_notequal();
  test_scalar_add_commutativity();
  test_scalar_add_associativity();
  test_scalar_mul_commutativity();
  test_scalar_mul_associativity();
  test_scalar_invert();
  test_scalar_distributivity();

  test_group_0();
  test_group_add0();
  test_group_add_commutativity();
  test_group_add_associativity();
  test_group_distributivity();
  test_group_n();
  }
}
