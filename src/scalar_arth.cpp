#include "scalar.hpp"

Scalar operator+(const Scalar& a, const Scalar& b){
  Scalar result;
  mpz_add(result.element, a.element, b.element);
  mpz_mod(result.element, result.element, Scalar::modulus);
  return result;
}

Scalar operator*(const Scalar& a, const Scalar& b){
  Scalar result;
  mpz_mul(result.element, a.element, b.element);
  mpz_mod(result.element, result.element, Scalar::modulus);
  return result;
}

void invert(Scalar& a){
  // Extended euklidean algorithm
  assert (0 != mpz_invert(a.element, a.element, Scalar::modulus));
}
