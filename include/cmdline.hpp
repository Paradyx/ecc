#ifndef CMDLINE_HPP_
#define CMDLINE_HPP_

#include <vector>
#include <string>

namespace cmdline{
  void cmdline(int argc, char const *argv[]);
  void cmdline_decrypt(std::vector<std::string> args);
  void cmdline_encrypt(std::vector<std::string> args);
  void cmdline_keygen(std::vector<std::string> args);
  void cmdline_sign(std::vector<std::string> args);
  void cmdline_verify(std::vector<std::string> args);
  void cmdline_box(std::vector<std::string> args);
  void cmdline_box_open(std::vector<std::string> args);
  void cmdline_test(std::vector<std::string> args);
}
#endif //CMDLINE_HPP_
