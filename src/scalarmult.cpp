#include "point.hpp"
#include "scalar.hpp"
#include "param.hpp"
#include "fe.hpp"

#include <assert.h>
#include <iostream>
#include "debug.hpp"

static unsigned int getbyte(const unsigned char* const d, int i){
  assert(i >= 0);
  unsigned int placeinarray = i >> 3;
  unsigned char bitinbyte = 1 << (i & 7);
  unsigned char di = d[placeinarray] & bitinbyte;
  return di;
}

/*
Compute q = d*P, d in F_2^511-187 and (p, 1) a point on the curve M511
The montgomery ladder is implemented as described in https://cr.yp.to/ecdh/curve25519-20060209.pdf
Also very analogue to the ref10 implementation.
q, p and d must point to Bytearrays of length 64.
*/

void scalarmult(Point& Q, Scalar& d, Point& P){
  // P1 = P3-P2
  Point P1, P2, P3;

  int i;
  unsigned char d_[64];
  d.tobytes(d_);
  unsigned char di;
  unsigned char swap;

  // The following comments reference the Wikipedia description of a Montgomery ladder
  // Used in the implementation of the addition.
  P1.x = P.x;
  P1.y = P.y;

  // R0 = 0
  P2.x.to1();
  P2.z.to0();

  // R1 = P
  P3.x = P.x;
  P3.z.to1();

  // The following code at (*) allways computes
  // (x2, z2) = 2*(x2, z2)
  // (x3, z3) =   (x2, z2) + (x3, z3)
  //
  // R0 = point_double(R0)
  // R1 = point_add(R0, R1)
  //
  // by exchanging (x2, z2) and (x3, z3) before (*), we can compute the following instead
  // (x2, z2) = 2*(x3, z3)
  // (x3, z3) =   (x3, z3) + (x2, z2)
  //
  // R0 = point_double(R1)
  // R1 = point_add(R0, R1)
  //
  // it just suffises to swap R0/(x2,z2) and R1/(x3,z3) afterwards, if we swaped before.

  // swap memorizes if we are missing a swap
  swap = 0;

  // Compute d*p with Montgomery Ladder
  // d is an m-bit integer with:
  // d = d0 + 2*d1 + 2^2*d2 + 2^m*dm
  //
  // for i from m down to 0 do
  for (i = 510; i >= 0; i--){
    // if di = 0 then
    //   to the swaped operation and swap afterwards again
    //
    di = getbyte(d_, i);
    // Dont swap if we need a swap from previous round
    swap ^= di;
    cswap(P2, P3, swap);

    //(*)
    // R0 ← point_double(R0) if di = 0 or
    // R1 ← point_double(R1) if di = 1
    //
    // R1 ← point_add(R0, R1) if di = 1 or
    // R0 ← point_add(R1, R0) if di = 1
    doubleandadd(P2, P3, P1.x);

    //memorize if another swap is necessary
    swap = di;
  }
  // do the final swap if necessary
  cswap(P2, P3, swap);

  //Recover y-coordinate
  recovery(P1, P2, P3);

  // Project point (x2, y2, z2) to (x2/z2,y2/z2 1)
  project(P2);
  Q = P2;
}

//Special cases of the scalar multiplication
void scalarmult_base(Point &Q, Scalar& d){
  Point G;
  G.frombytes(M511.gx, M511.gy);
  scalarmult(Q, d, G);
}

void scalarmult_n(Point &Q, Point &P){
  Scalar n;
  //n.frombytes(M511.n);
  //scalarmult(Q, d, G);
  //TODO: Do actually the multiplication n times, without reducing n to 0.
}

void double_scalarmult(Point& x, Scalar& u1, Scalar& u2, Point& Q){

}
