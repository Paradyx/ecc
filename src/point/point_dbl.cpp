#include "point.hpp"
#include "fe.hpp"

void dbl(Point& R, Point& P){
  Fe A, B, C, D, E, F, CA, CCAA, CCCAAA;
  Fe x1, y1, x3, y3;
  x1 = P.x;
  y1 = P.y;
  // x3 = b*(3*x1^2+2*a*x1+1)2/(2*b*y1)2-a-x1-x1
  // y3 = (2*x1+x1+a)*(3*x1^2+2*a*x1+1)/(2*b*y1)-b*(3*x1^2+2*a*x1+1)3/(2*b*y1)3-y1
  B = x1+x1;
  C.to1();
  C = C+mulA(B);
  D = x1*x1;
  D = D+D+D;
  C = D+C;
  invert(A);
  CA = C*A;
  CCAA = CA*CA;
  CCCAAA = CCAA*CA;
  x3 = CCAA-constA()-B;
  E = B+x1+constA();
  B = mulA(B);
  F.to1();
  F = F+D+B;
  E = E*F*A;
  y3= E-CCCAAA-y1;
  R.x = x3;
  R.y = y3;
}
