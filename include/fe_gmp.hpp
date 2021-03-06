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
  void frombytes(const unsigned char in[64]);
  void tobytes(unsigned char out[64]);
  void fromint(const int in);
  void print();

  void operator=(const Fe& rhs);
  void to0();
  void to1();

  friend void invert(Fe& a);
  friend void cswap(Fe& a, Fe& b, unsigned int condition);
  // Constant operations
  friend Fe a24(const Fe& a);
  friend Fe mulA(const Fe& a);
  friend Fe retA();
  friend Fe a2(const Fe& a);

  friend Fe operator+(const Fe& a, const Fe& b);
  friend Fe operator*(const Fe& a, const Fe& b);
  friend Fe operator-(const Fe& a, const Fe& b);
  friend bool operator==(const Fe& a, const Fe& b);

};

void invert(Fe& a);
void cswap(Fe& a, Fe& b, unsigned int condition);
// Constant operations
Fe a24(const Fe& a);
Fe mulA(const Fe& a);
Fe constA();
Fe a2(const Fe& a);

Fe operator+(const Fe& a, const Fe& b);
Fe operator*(const Fe& a, const Fe& b);
Fe operator-(const Fe& a, const Fe& b);

#endif //M511_FINITEFIELDELEMENT_HPP
