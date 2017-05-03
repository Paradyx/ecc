#ifndef M511_FINITEFIELDELEMENT_HPP
#define M511_FINITEFIELDELEMENT_HPP11

#include <stdint.h>

class Fe {
private:
  // x = t[0]+t[1]*2^32+t[2]*2^64+t[3]*2^96+ ... + t[i]*2^512
  int32_t t[20];

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
