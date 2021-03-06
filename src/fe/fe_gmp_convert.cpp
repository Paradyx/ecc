#if (FE_CONST==0)

#include <iostream>
#include "fe_gmp.hpp"
#include "assert.h"

void Fe::frombytes(const unsigned char in[64]) {
  mpz_import(this->element, 64, 1, sizeof(unsigned char), 1, 0, in);
}

void Fe::tobytes(unsigned char* out) {
  size_t countp;
  unsigned char* tmp = (unsigned char*) mpz_export(NULL, &countp, 1, sizeof(unsigned char),1, 0, this->element);
  assert(countp<=64);
  for (unsigned int i = 0; i<countp; i++) out[i] = tmp[i];
  for (unsigned int i = countp; i<64; i++) out[i] = 0;

  // Free memory
  void (*freefunc) (void *, size_t);
  mp_get_memory_functions (NULL, NULL, &freefunc);
  freefunc(tmp, countp);
}

void Fe::fromint(const int in) {
  mpz_set_ui(this->element, in);
}

void Fe::operator=(const Fe& rhs) {
  mpz_set(this->element, rhs.element);
}

void Fe::to0() {
   mpz_set_ui (this->element, 0);
}

void Fe::to1() {
   mpz_set_ui (this->element, 1);
}

#endif //FE_CONST
