#include "keys.hpp"
//#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <string.h>
#include <assert.h>
#include <random>
#include "scalarmult.hpp"

void Private_Key::generate(){
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;

  for (int i = 0; i < sizeof(this->d); ++i) {
    this->d[i] = distribution(generator);
  }
  this->b = true;
  this->g[0] = 5;
}

void Private_Key::from_string(std::string in){
  assert(in.length()==64);
  strncpy(this->d, in.c_str(), sizeof(this->d));
}

std::string Private_Key::to_string(){
  std::string result;
  result.assign(this->d, 64);
  return result;
}

Public_Key Private_Key::get_pub(){
  unsigned char pub[64];
  const unsigned char* d2 = (const unsigned char*) d;
  const unsigned char* g2 = (const unsigned char*) g;
  scalarmult(pub, d2, g2);
}

void Public_Key::from_string(std::string in){
  assert(in.length()==64);
  strncpy(this->q, in.c_str(), sizeof(this->q));
}

std::string Public_Key::to_string(){
  std::string result;
  result.assign(this->q, 64);
  return result;
}
