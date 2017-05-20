#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <string>

class Block {
public:
  virtual void frombytes(const unsigned char in[64]) = 0;
  virtual void tobytes(unsigned char out[64]) = 0;
  void fromstring(std::string in);
  std::string tostring();
};

#endif //BLOCK_HPP
