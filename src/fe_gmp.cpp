#ifdef FE_GMP_HPP

#include "fe_gmp.hpp"

bool Fe::init = false;
mpz_t Fe::modulus;

Fe::Fe (){
  mpz_init2(element, 511);

  // Set modulus only once
  if (init == false) {
    mpz_init2(modulus, 511);
    mpz_set_str(modulus, "7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff45", 16);
    init = true;
  }
}

Fe::~Fe (){
  mpz_clear(element);
}

#endif //FE_GMP_HPP
