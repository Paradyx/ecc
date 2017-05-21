#include "block.hpp"
#include <string>
#include <assert.h>
#include "debug.hpp"

void Block::fromstring(std::string in){
  Debug::Write("New Block from String");
  assert(in.length()==64);
  char tmp[64];
  in.copy(tmp, in.length(),0);
  frombytes((const unsigned char*)tmp);
}

std::string Block::tostring(){
  Debug::Write("Converting Block to string");
  std::string result;
  unsigned char tmp[64];
  tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}
