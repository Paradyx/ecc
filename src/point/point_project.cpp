#include "point.hpp"
#include "fe.hpp"

void project(Point& P){
  invert(P.z);
  P.x = P.x * P.z;
  P.y = P.y * P.z;
  P.z.to1();
}
