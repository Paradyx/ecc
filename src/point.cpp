#include "point.hpp"

void Point::frombytes(const unsigned char in[64]){
  x.frombytes(in);
}

void Point::tobytes(unsigned char out[64]){
  x.tobytes(out);
}

void Point::operator=(const Point& rhs){
  x = rhs.x;
}
