#include "point.hpp"

Point operator+(Point& P, Point& Q){


  Point R1, R2;
  add(R1, P, Q);
  dbl(R2, P);
  bool eq = equal(P, Q);
  cswap(R1, R2, eq);
  return R1;
}
