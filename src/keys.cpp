#include "keys.hpp"
//#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <string.h>
#include <assert.h>

#include "param.hpp"

void Private_Key::generate(){
  d.fromrandom();
  this->b = true;
}

void Private_Key::from_string(std::string in){
  assert(in.length()==64);
  char tmp[64];
  strncpy(tmp, in.c_str(), sizeof(tmp));
  d.frombytes((const unsigned char*)tmp);
}

std::string Private_Key::to_string(){
  std::string result;
  unsigned char tmp[64];
  d.tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}

Public_Key Private_Key::get_pub(){
  Point pub;
  Point base;
  base.frombytes(M511.g);

  scalarmult(pub, d, base);
}

void Public_Key::from_string(std::string in){
  assert(in.length()==64);
  char tmp[64];
  strncpy(tmp, in.c_str(), sizeof(tmp));
  q.frombytes((const unsigned char*)tmp);
}

std::string Public_Key::to_string(){
  std::string result;
  unsigned char tmp[64];
  q.tobytes(tmp);
  result.assign((char*)tmp, 64);
  return result;
}
