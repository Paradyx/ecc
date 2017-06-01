#include "point.hpp"
#include "fe.hpp"

void add(Point& R, Point& P, Point& Q){
  Fe x1, x2, x3;
  Fe y1, y2, y3;
  Fe A, B, C, BB;

  x1 = P.x;
  x2 = Q.x;
  y1 = P.y;
  y2 = Q.y;

  //x3 = b*(y2-y1)2/(x2-x1)2-a-x1-x2
  //y3 = (2*x1+x2+a)*(y2-y1)/(x2-x1)-b*(y2-y1)3/(x2-x1)3-y1
  A = x1 + x2;
  B = x2 - x1;
  C = y2 - y1;
  //x3 = b*C^2/B^2-a-x1-x2
  //y3 = (2*x1+x2+a)*C/B-b*C^3/B^3-y1
  invert(B);
  B = B*C;
  BB = B*B;
  //x3 = BB-a-x1-x2
  //y3 = (2*x1+x2+a)*B-BB*B-y1
  C = BB-A;
  x3 = C-constA();
  //y3 = (2*x1+x2+a)*B-BB*B-y1
  A = A+x1;
  A = A+constA();
  A = A*B;
  BB = BB*B;
  A = A-BB;
  y3 = A-y1;

  R.x = x3;
  R.y = y3;
}
