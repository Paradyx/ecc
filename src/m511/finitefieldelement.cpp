#include "m511/finitefieldelement.hpp"
#include <gmp.h>

bool FiniteFieldElement::init = false;
mpz_t FiniteFieldElement::modulus;

FiniteFieldElement::FiniteFieldElement (){
  mpz_init_set_ui(element, 0);
}

FiniteFieldElement::FiniteFieldElement(const FiniteFieldElement& i){
  FiniteFieldElement();
  mpz_set(element, i.element);
}

FiniteFieldElement::~FiniteFieldElement (){
  mpz_clear(element);
  mpz_clear(modulus);
}

FiniteFieldElement FiniteFieldElement::operator+(const FiniteFieldElement& rhs){
  FiniteFieldElement result;
  mpz_add(result.element, this->element, rhs.element);
  mpz_mod(result.element, result.element, FiniteFieldElement::modulus);
  return result;
}

FiniteFieldElement& FiniteFieldElement::operator+=(const FiniteFieldElement& rhs){
  mpz_add(this->element, this->element, rhs.element);
  mpz_mod(this->element, this->element, this->modulus);
  return *this;
}

FiniteFieldElement FiniteFieldElement::operator*(const FiniteFieldElement& rhs){
  FiniteFieldElement result;
  mpz_mul(result.element, this->element, rhs.element);
  mpz_mod(result.element, result.element, FiniteFieldElement::modulus);
  return result;
}

FiniteFieldElement& FiniteFieldElement::operator*=(const FiniteFieldElement& rhs){
  mpz_mul(this->element, this->element, rhs.element);
  mpz_mod(this->element, this->element, this->modulus);
  return *this;
}

FiniteFieldElement& FiniteFieldElement::operator*=(const int& rhs){
  mpz_mul_ui(this->element, this->element, rhs);
  mpz_mod(this->element, this->element, this->modulus);
}

FiniteFieldElement FiniteFieldElement::operator-(const FiniteFieldElement& rhs){
  FiniteFieldElement result;
  mpz_sub(result.element, this->element, rhs.element);
  mpz_mod(result.element, result.element, FiniteFieldElement::modulus);
  return result;
}

FiniteFieldElement& FiniteFieldElement::operator-=(const FiniteFieldElement& rhs){
  mpz_sub(this->element, this->element, rhs.element);
  mpz_mod(this->element, this->element, this->modulus);
  return *this;
}

FiniteFieldElement& FiniteFieldElement::operator=(const FiniteFieldElement& rhs){
  mpz_set(this->element, rhs.element);
  return *this;
}

FiniteFieldElement& FiniteFieldElement::operator=(const int& rhs){
  mpz_set_ui(this->element, rhs);
  return *this;
}
