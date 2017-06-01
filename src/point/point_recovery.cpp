#include "point.hpp"
#include "fe.hpp"
#include "param.hpp"



void recovery(Point& P, Point& Q, Point& PQ){
  Fe x1, y1, x2, z2, x3, z3;
  Fe v1, v2, v3, v4, x, y, z;
  x1 = P.x;
  y1 = P.y;
  x2 = Q.x;
  z2 = Q.z;
  x3 = PQ.x;
  z3 = PQ.z;

  v1 = x1*z2;
  v2 = x2+v1;
  v3 = x2-v1;
  v3 = v3*v3;
  v3 = v3*x3;
  v1 = a2(z2);
  v2 = v2+v1;
  v4 = x1*x2;
  v4 = v4+z2;
  v2 = v2*v4;
  v1 = v1*z2;
  v2 = v2-v1;
  v2 = v2*z3;
  y = v2-v3;
  v1 = y1+y1;
  v1 = v1*z2;
  v1 = v1*z3;
  x = v1*x2;
  z = v1*z2;
  Q.x = x;
  Q.y = y;
  Q.z = z;
}
