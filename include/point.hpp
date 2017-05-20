#ifndef POINT_HPP
#define POINT_HPP

#include "point.hpp"
#include "scalar.hpp"
#include "fe.hpp"

class Scalar;

class Point {
private:
  Fe x;

public:
  void frombytes(const unsigned char in[64]);
  void tobytes(unsigned char out[64]);
  Scalar toscalar();

  void operator=(const Point& rhs);
  friend void scalarmult(Point& q, Scalar& d, Point& p);
};

#endif //POINT_HPP
