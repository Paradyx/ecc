#include "point.hpp"
#include "scalar.hpp"

void Point::frombytes(const unsigned char in[64]){
  x.frombytes(in);
}

void Point::tobytes(unsigned char out[64]){
  x.tobytes(out);
}

Scalar Point::toscalar(){
  Scalar result;
  unsigned char tmp[64];
  frombytes(tmp);
  result.frombytes(tmp);
  return result;
}

void Point::operator=(const Point& rhs){
  x = rhs.x;
}
