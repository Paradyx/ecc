#if FE_CONST==0

#include "fe_gmp.hpp"
#include <assert.h>

void invert(Fe& a){
  // Extended euklidean algorithm
  assert (0 != mpz_invert(a.element, a.element, Fe::modulus));
}

#endif //FE_CONST
