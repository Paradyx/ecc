#include "block.hpp"
#include <string>
#include <assert.h>
#include "debug.hpp"

void Block64::fromstring(std::string in){
  Debug::Write("New Block from String");
  assert(in.length()==64);
  char tmp[64];
  in.copy(tmp, in.length(),64);
  frombytes((const unsigned char*)tmp);
}

std::string Block64::tostring(){
  Debug::Write("Converting Block to string");
  std::string result;
  unsigned char tmp[64];
  tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}

void Block128::fromstring(std::string in){
  Debug::Write("New Block from String");
  assert(in.length()==128);
  char tmp[128];
  in.copy(tmp, in.length(),128);
  frombytes((const unsigned char*)tmp);
}

std::string Block128::tostring(){
  Debug::Write("Converting Block to string");
  std::string result;
  unsigned char tmp[128];
  tobytes(tmp);
  result.assign((char*)tmp, 128);
  return result;
}
