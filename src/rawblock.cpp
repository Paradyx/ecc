#include "rawblock.hpp"
#include <cstring>

void RawBlock::frombytes(const unsigned char in[64]){
  memcpy(element, in, 64*sizeof(char));

}

void RawBlock::tobytes(unsigned char out[64]){
  memcpy(out, element, 64*sizeof(char));
}
