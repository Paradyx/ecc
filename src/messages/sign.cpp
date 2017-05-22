#include "messages.hpp"
#include <string>
#include <iostream>
#include "param.hpp"
#include "mysha.hpp"
#include "keys.hpp"
#include "scalar.hpp"
#include "messages.hpp"

Signature RawBlock::sign(Private_Key &sk){
  // ECDSA Schoolbook
  // Calculate hash of message
  unsigned char digest[64];
  std::cout << "Encoded Rawblock: " << enc() << std::endl;
  mysha512(element, digest);

  // Convert hash to scalar
  Scalar z;
  z.frombytes(digest);

  // Choose random k
  Scalar k;
  k.fromrandom();

  // Generate Basepoint
  Point g;
  g.frombytes(M511.g);

  // Calculate r
  Point x;
  scalarmult(x, k, g);
  Scalar r = x.toscalar();

  // Invert k
  Scalar k_inv;
  k_inv = invert(k);

  // Calculate s
  Scalar s;
  s = k_inv*(z+r*sk);

  // Resulting Signature: (s,r)
  Signature sig;
  sig.s = s;
  sig.r = r;
  return sig;
}
