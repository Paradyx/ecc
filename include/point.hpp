#ifndef POINT_HPP
#define POINT_HPP

#include "block.hpp"
#include "point.hpp"
#include "scalar.hpp"
#include "fe.hpp"

class Scalar;

class Point : public Block {
private:
  friend void doubleandadd(Point& P, Point&Q, Fe& x1);
  friend void add(Point& R, Point& P, Point& Q);
  friend void dbl(Point& R, Point& P);
  friend void recovery(Point& P, Point& Q, Point& PQ);
public:
  Fe x;
  Fe y;
  Fe z;

  void frombytes(const unsigned char inxy[128]);
  void frombytes(const unsigned char inx[64], const unsigned char iny[64]);
  void tobytes(unsigned char out[128]);
  Scalar toscalar();

  void operator=(const Point& rhs);
  // x = u1*G+u2*Q
  friend void double_scalarmult(Point& x, Scalar& u1, Scalar& u2, Point& Q);
  // Q = d*P
  friend void scalarmult(Point& Q, Scalar& d, Point& P);
  // Q = d*G, G: generator point
  friend void scalarmult_base(Point &Q, Scalar& d);
  // Q = n*P, n: order of the elliptic curve
  friend void scalarmult_n(Point &Q, Point& P);
  // R = P+Q
  friend Point operator+(Point& P, Point& Q);
  // return true iff P == Q
  friend bool equal(Point& P, Point& Q);
  // swaps P and Q, iff eq == true
  friend void cswap(Point& P, Point& Q, bool eq);
  // projects P(X, Y, Z) to (x/z, y/z);
  friend void project(Point& P);
};

#endif //POINT_HPP
