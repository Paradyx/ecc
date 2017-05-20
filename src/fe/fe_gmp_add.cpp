#if (FE_CONST==0)

#include "fe_gmp.hpp"

Fe operator+(const Fe& a, const Fe& b){
  Fe result;
  mpz_add(result.element, a.element, b.element);
  mpz_mod(result.element, result.element, Fe::modulus);
  return result;
}

#endif //FE_CONST
