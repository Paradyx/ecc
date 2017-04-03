#ifndef M511_FINITEFIELDELEMENT_HPP_
#define M511_FINITEFIELDELEMENT_HPP_

class FiniteFieldElement {
private:
  mpz_t element;

  static bool init;
  static mpz_t modulus;

public:
  FiniteFieldElement (){
    mpz_init_set_ui(element, 0);

    if (not init){
      mpz_init_set_ui(modulus, 1);
      mpz_mul_2exp(modulus, modulus, 511);
      mpz_sub_ui(modulus, modulus, 187);
    }
  }

  FiniteFieldElement(const FiniteFieldElement& i){
    FiniteFieldElement();
    mpz_set(element, i.element);
  }

  ~FiniteFieldElement (){
    mpz_clear(element);
    mpz_clear(modulus);
  }

  friend FiniteFieldElement operator+(const FiniteFieldElement& lhs, const FiniteFieldElement& rhs){
    FiniteFieldElement result;
    mpz_add(result.element, lhs.element, rhs.element);
    mpz_mod(result.element, result.element, modulus);
    return result;
  }

  FiniteFieldElement& operator+=(const FiniteFieldElement& rhs){
    mpz_add(this->element, this->element, rhs.element);
    mpz_mod(this->element, this->element, modulus);
    return *this;
  }

  friend FiniteFieldElement operator*(const FiniteFieldElement& lhs, const FiniteFieldElement& rhs){
    FiniteFieldElement result;
    mpz_mul(result.element, lhs.element, rhs.element);
    mpz_mod(result.element, result.element, modulus);
    return result;
  }

  FiniteFieldElement& operator*=(const FiniteFieldElement& rhs){
    mpz_mul(this->element, this->element, rhs.element);
    mpz_mod(this->element, this->element, modulus);
    return *this;
  }

  friend FiniteFieldElement operator-(const FiniteFieldElement& lhs, const FiniteFieldElement& rhs){
    FiniteFieldElement result;
    mpz_sub(result.element, lhs.element, rhs.element);
    mpz_mod(result.element, result.element, modulus);
    return result;
  }

  FiniteFieldElement& operator-=(const FiniteFieldElement& rhs){
    mpz_sub(this->element, this->element, rhs.element);
    mpz_mod(this->element, this->element, modulus);
    return *this;
  }

  FiniteFieldElement& operator=(const FiniteFieldElemen& rhs){
    mpz_set(this->element, rhs.element);
    return *this;
  }
};

#endif //M511_FINITEFIELDELEMENT_HPP
