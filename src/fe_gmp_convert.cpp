#if FE_CONST==0

#include "fe_gmp.hpp"

void Fe::frombytes(const unsigned char in[64]) {
  //mpz_import(this->element, 64, 1, 1, 0, in);
}

void Fe::tobytes(const unsigned char out[64]) {
  //mpz_export(this->element, 64, 1, 1, 0, out);
}

void Fe::fromint(const int in) {
  //mpz_set_ui(this->element, in)
}

void Fe::operator=(Fe& rhs) {
  //mpz_set(this->element, rhs.element);
}

void Fe::to0() {
   //mpz_set_ui (this->element, 0);
}

void Fe::to1() {
   //mpz_set_ui (this->element, 1);
}

#endif //FE_CONST
