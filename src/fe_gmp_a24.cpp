#if (FE_CONST==0)

#include "fe_gmp.hpp"

Fe a24(const Fe& a){
  Fe result;
  // A = 530438
  // (A - 2) /4 = 132609 <-- we use thisone in this implementation
  // (A + 2) /4 = 132611

  mpz_mul_ui (result.element, a.element, (unsigned long int) 132609);
  mpz_mod(result.element, result.element, Fe::modulus);
  return result;
}

#endif //FE_CONST
