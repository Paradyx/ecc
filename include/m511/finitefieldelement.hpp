#ifndef M511_FINITEFIELDELEMENT_HPP
#define M511_FINITEFIELDELEMENT_HPP

#include <gmp.h>

class FiniteFieldElement {
private:
  mpz_t element;
  static mpz_t modulus;
  static bool init;

public:

  FiniteFieldElement ();
  FiniteFieldElement(const FiniteFieldElement& i);
  ~FiniteFieldElement ();
  FiniteFieldElement operator+(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator+=(const FiniteFieldElement& rhs);
  FiniteFieldElement operator*(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator*=(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator*=(const int& rhs);
  FiniteFieldElement operator-(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator-=(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator=(const FiniteFieldElement& rhs);
  FiniteFieldElement& operator=(const int& rhs);
};

#endif //M511_FINITEFIELDELEMENT_HPP
