#include "fe_gmp.hpp"

Fe operator*(const Fe& a, const Fe& b){
  Fe result;
  mpz_mul(result.element, a.element, b.element);
  mpz_mod(result.element, result.element, Fe::modulus);
  return result;
}
