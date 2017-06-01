#include "scalar.hpp"
#include <random>

void Scalar::fromrandom(){
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;

  unsigned char tmp[64];

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  frombytes(tmp);
}
