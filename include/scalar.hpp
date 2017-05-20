#ifndef FE_SKALAR_HPP
#define FE_SKALAR_HPP

#include <gmp.h>

class Scalar {
private:
  mpz_t element;
  static mpz_t modulus;
  static bool init;

public:
  Scalar ();
  ~Scalar ();
  void frombytes(const unsigned char in[64]);
  void tobytes(unsigned char out[64]);
  void fromint(const int in);
  void print();

  void operator=(const Scalar& rhs);

  friend void invert(Scalar& a);

  friend Scalar operator+(const Scalar& a, const Scalar& b);
  friend Scalar operator*(const Scalar& a, const Scalar& b);
};

#endif //M511_FINITEFIELDELEMENT_HPP
