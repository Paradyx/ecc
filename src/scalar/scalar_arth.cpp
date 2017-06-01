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

Scalar invert(Scalar& a){
  Scalar result;
  // Extended euklidean algorithm
  assert (0 != mpz_invert(result.element, a.element, Scalar::modulus));
  return result;
}

bool operator==(const Scalar& a, const Scalar& b){
  return (0 == mpz_cmp(a.element, b.element));
}
