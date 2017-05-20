#include "scalar.hpp"
#include "assert.h"

void Scalar::frombytes(const unsigned char in[64]) {
  mpz_import(this->element, 64, 1, sizeof(unsigned char), 1, 0, in);
}

void Scalar::tobytes(unsigned char* out) {
  size_t countp;
  unsigned char* tmp = (unsigned char*) mpz_export(NULL, &countp, 1, sizeof(unsigned char),1, 0, this->element);
  assert(countp<=64);
  for (int i = 0; i<countp; i++) out[i] = tmp[i];
  for (int i = countp; i<64; i++) out[i] = 0;

  // Free memory
  void (*freefunc) (void *, size_t);
  mp_get_memory_functions (NULL, NULL, &freefunc);
  freefunc(tmp, countp);
}

void Scalar::fromint(const int in) {
  mpz_set_ui(this->element, in);
}

void Scalar::operator=(const Scalar& rhs) {
  mpz_set(this->element, rhs.element);
}
