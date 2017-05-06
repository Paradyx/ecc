#if FE_CONST==0

#include "fe_gmp.hpp"
#include <assert.h>

friend void invert(const Fe& a){
  // Extended euklidean algorithm
  Fe result;
  assert (0 != mpz_invert(result.element, a.element, Fe::modulus));
  return Fe;
}

#endif //FE_CONST
