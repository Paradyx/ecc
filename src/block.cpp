#include "block.hpp"
#include <string.h>
#include <assert.h>

void Block::fromstring(std::string in){
  assert(in.length()==64);
  char tmp[64];
  strncpy(tmp, in.c_str(), sizeof(tmp));
  frombytes((const unsigned char*)tmp);
}

std::string Block::tostring(){
  std::string result;
  unsigned char tmp[64];
  tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}
