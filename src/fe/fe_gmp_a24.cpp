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

Fe mulA(const Fe& a){
  Fe result;
  mpz_mul_ui (result.element, a.element, (unsigned long int) 530438);
  mpz_mod(result.element, result.element, Fe::modulus);
  return result;
}

Fe constA(){
  Fe result;
  result.fromint(530438);
  return result;
}

Fe a2(const Fe& a){
  Fe result;
  mpz_mul_ui (result.element, a.element, (unsigned long int) 1060876);
  mpz_mod(result.element, result.element, Fe::modulus);
  return result;
}

#endif //FE_CONST
