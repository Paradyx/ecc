#if FE_CONST==0

#include "fe_gmp.hpp"

void cswap(Fe& a, Fe& b, unsigned int condition){
  if (condition) {
    mpz_swap (a.element, b.element);
  }
}

#endif //FE_CONST
