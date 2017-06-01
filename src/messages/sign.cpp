#include "messages.hpp"
#include <string>
#include <iostream>
#include "param.hpp"
#include "mysha.hpp"
#include "keys.hpp"
#include "scalar.hpp"
#include "point.hpp"
#include "messages.hpp"

Signature RawBlock::sign(Private_Key &sk){
  // ECDSA Schoolbook
  // Calculate hash of message
  unsigned char digest[64];
  std::cout << "Encoded Rawblock: " << enc() << std::endl;
  mysha512(element, digest);

  Scalar z;
  Scalar k;
  Scalar s;
  Scalar r;
  Point x;
  Signature sig;

  // Convert hash to scalar
  z.frombytes(digest);
  // Choose random k
  k.fromrandom();

  // Calculate r
  scalarmult_base(x, k);
  r = x.toscalar();

  // Invert k
  k = invert(k);

  // Calculate s
  s = k*(z+r*sk);

  // Resulting Signature: (s,r)
  sig.s = s;
  sig.r = r;
  return sig;
}
