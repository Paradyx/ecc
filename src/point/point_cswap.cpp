#include "point.hpp"
#include "fe.hpp"

void cswap(Point& P, Point& Q, bool b){
  cswap(P.x, Q.x, b);
  cswap(P.y, Q.y, b);
  cswap(P.z, Q.z, b);
}
