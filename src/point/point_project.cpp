#include "point.hpp"
#include "fe.hpp"
#include <assert.h>

void project(Point& P){
  Fe zero;
  zero.to0();
  if (P.z == zero){
    assert(P.x == zero);
    P.z.to0();
    P.y.to1();
    return;
  }

  invert(P.z);
  P.x = P.x * P.z;
  P.y = P.y * P.z;
  P.z.to1();
}
