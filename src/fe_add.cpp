#include "fe.hpp"

Fe operator+(const Fe& a, const Fe& b){
  // a and b are in reduced form
  Fe r;
  for (int i = 0; i<20; i++) r.t[i] = a.t[i] + b.t[i];
  return r;
}
