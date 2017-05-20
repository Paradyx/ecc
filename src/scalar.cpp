#include "scalar.hpp"

bool Scalar::init = false;
mpz_t Scalar::modulus;

Scalar::Scalar (){
  mpz_init2(element, 511);

  // Set modulus only once
  if (init == false) {
    mpz_init2(modulus, 511);
    mpz_set_str(modulus, "0x100000000000000000000000000000000000000000000000000000000000000017b5feff30c7f5677ab2aeebd13779a2ac125042a6aa10bfa54c15bab76baf1b", 16);
    init = true;
  }
}

Scalar::~Scalar (){
  mpz_clear(element);
}

void Scalar::print(){
  gmp_printf ("%Zd\n", element);
}
