#if (FE_CONST==0)

#include "fe_gmp.hpp"

bool operator==(const Fe& a, const Fe& b){
  return (0 == mpz_cmp(a.element, b.element));
}

#endif //FE_CONST
