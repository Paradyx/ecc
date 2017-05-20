#ifndef RAWBLOCK_HPP
#define RAWBLOCK_HPP

#include "block.hpp"

class RawBlock : public Block {
private:
  unsigned char element[64];

public:
  void frombytes(const unsigned char in[64]);
  void tobytes(unsigned char out[64]);
};

#endif //SCALAR_HPP
