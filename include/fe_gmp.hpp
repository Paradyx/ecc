#ifdef FE_CONST_HPP
#error Only one implementation of the finite field element is supported
#endif //FE_CONST_HPP

#ifndef FE_GMP_HPP
#define FE_GMP_HPP

#include <gmp.h>

class Fe {
private:
  mpz_t element;
  static mpz_t modulus;
  static bool init;

public:
  Fe ();
  ~Fe ();
  friend void frombytes(const unsigned char * in);
  friend void tobytes(const unsigned char * out);

  void operator=(Fe& rhs);
  friend void to0();
  friend void to1();

  friend Fe invert(const Fe& a);
  friend Fe operator+(const Fe& a, const Fe& b);
  friend Fe operator*(const Fe& a, const Fe& b);
  friend Fe operator-(const Fe& a, const Fe& b);
};

#endif //M511_FINITEFIELDELEMENT_HPP
