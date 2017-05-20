#include "scalar.hpp"
#include <random>

void Scalar::new_random(){
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;

  unsigned char tmp[64];

  for (int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  frombytes(tmp);
}
