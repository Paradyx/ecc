#include "block.hpp"
#include <string>
#include <assert.h>

void Block::fromstring(std::string in){
  assert(in.length()==64);
  char tmp[64];
  in.copy(tmp, in.length(),0);
  frombytes((const unsigned char*)tmp);
}

std::string Block::tostring(){
  std::string result;
  unsigned char tmp[64];
  tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}
