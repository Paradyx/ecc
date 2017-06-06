#include "point.hpp"
#include "fe.hpp"
#include "debug.hpp"

void doubleandadd(Point& P, Point& Q, Fe& x1){
  Fe x2, z2, x3, z3;
  x2 = P.x;
  z2 = P.z;
  x3 = Q.x;
  z3 = Q.z;
  // https://www.hyperelliptic.org/EFD/g1p/auto-montgom-xz.html#ladder-mladd-1987-m
  // A = X2+Z2
  // AA = A²
  // B = X2-Z2
  // BB = B²
  // E = AA-BB
  // C = X3+Z3
  // D = X3-Z3
  // DA = D*A
  // CB = C*B
  // t0 = DA+CB
  // X5 = t0^2
  // t1 = DA-CB
  // t2 = t1^2
  // Z5 = X1*t2
  // X4 = AA*BB
  // t3 = a24*E
  // t4 = BB+t3
  // Z4 = E*t4

  Fe A, B, C, D, E, AA, BB, DA, CB, t0, t1, t2, t3, t4;
  A = x2+z2;
  AA = A*A;
  B = x2-z2;
  BB = B*B;
  E = AA-BB;
  C = x3+z3;
  D = x3-z3;
  DA = D*A;
  CB = C*B;
  t0 = DA+CB;
  x3 = t0*t0;
  t1 = DA-CB;
  t2 = t1*t1;
  z3 = x1*t2;
  x2 = AA*BB;
  t3 = a24(E);
  t4 = BB+t3;
  z2 = E*t4;
  P.x = x2;
  P.z = z2;
  Q.x = x3;
  Q.z = z3;
}
