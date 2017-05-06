#ifdef FE_GMP_HPP
#error Only one implementation of the finite field element is supported
#endif //FE_GMP_HPP

#ifndef FE_CONST_HPP
#define FE_CONST_HPP

#include <stdint.h>

class Fe {
private:
  // x = t[0]+t[1]*2^32+t[2]*2^64+t[3]*2^96+ ... + t[i]*2^512
  int32_t t[20];

public:
  Fe ();
  ~Fe ();
  void frombytes(const unsigned char in[64]);
  void tobytes(const unsigned char out[64]);
  void fromint(const int in);

  void operator=(const Fe& rhs);
  void to0();
  void to1();

  friend void invert(Fe& a);
  friend void cswap(Fe& a, Fe& b, unsigned int condition);
  friend Fe operator+(const Fe& a, const Fe& b);
  friend Fe operator*(const Fe& a, const Fe& b);
  friend Fe operator-(const Fe& a, const Fe& b);
};

#endif //M511_FINITEFIELDELEMENT_HPP
