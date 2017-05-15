#include "scalarmult.hpp"
#include "fe.hpp"

static void m511_doubleandadd(Fe& x2, Fe& z2, Fe& x3, Fe& z3, const Fe& x1){
  //
  Fe tmp1;
  Fe tmp2;
  Fe tmp3;
  Fe tmp4;
  // First level
  tmp1 = x2 + z2;
  tmp2 = x2 - z2;
  tmp3 = x3 + z3;
  tmp4 = x3 - z3;
  // Secod level
  tmp3 = tmp3 * tmp2;
  tmp4 = tmp4 * tmp1;
  tmp1 = tmp1 * tmp1;
  tmp2 = tmp2 * tmp2;
  // Third level
  x2   = tmp1 * tmp2;
  tmp2 = tmp1 - tmp2;
  x3   = tmp3 * tmp4;
  tmp4 = tmp3 - tmp4; //tmp3 is used for column 2 from this point on

  // Fourth level
  tmp3 = a24(tmp2);
  x3   = x3   * x3;
  tmp4 = tmp4 * tmp4;

  // Fifth level
  tmp3 = tmp1 + tmp3;
  z3   = tmp4 * x1;

  // Sixth level
  z2 = tmp3 * tmp2;
}

/*
Compute q = d*P, d in F_2^511-187 and (p, 1) a point on the curve M511
The montgomery ladder is implemented as described in https://cr.yp.to/ecdh/curve25519-20060209.pdf
Also very analogue to the ref10 implementation.
*/
static void m511_scalarmult(unsigned char* q, unsigned char* d, unsigned char* p){
  Fe x1;
  Fe x2;
  Fe z2;
  Fe x3;
  Fe z3;
  unsigned int i;
  unsigned int di;
  unsigned int swap;

  // The following comments reference the Wikipedia description of a Montgomery ladder
  // Used in the implementation of the addition.
  x1.frombytes(p);

  // R0 = 0
  x2.to1();
  z2.to0();

  // R1 = P
  x3 = x1;
  z3.to1();

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
    di = 0;
    // Dont swap if we need a swap from previous round
    swap ^= di;
    cswap(x2, x3, swap);
    cswap(z2, z3, swap);

    //(*)
    // R0 ← point_double(R0) if di = 0 or
    // R1 ← point_double(R1) if di = 1
    //
    // R1 ← point_add(R0, R1) if di = 1 or
    // R0 ← point_add(R1, R0) if di = 1
    m511_doubleandadd(x2, z2, x3, z3, x1);

    //memorize if another swap is necessary
    swap = di;
  }

  // do the final swap if necessary
  cswap(x2, x3, swap);
  cswap(z2, z3, swap);

  // Project point (x2, z2) to (x2/z2, 1)
  // return R0
  invert(z2);
  x2 = x2 * z2;

  x2.tobytes(q);
}
