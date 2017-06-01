#include "messages.hpp"
#include "param.hpp"
#include "mysha.hpp"
#include <iostream>

bool RawBlock::verify(Signature sig, Public_Key pub){
  //TODO: Check that Public_Key is valid

  Scalar z;
  Scalar w;
  Scalar u1;
  Scalar u2;
  Point x;

  unsigned char digest[64];
  std::cout << "Encoded Rawblock: " << enc() << std::endl;
  mysha512(element, digest);

  // Convert hash to scalar
  z.frombytes(digest);

  // Invert s
  w = invert(sig.s);

  // u_1 = z*w
  z = z*w;

  // u_2 = r*w
  w = sig.r*w;

  // Calculate curve point x = u1*G + u2*Q
  double_scalarmult(x, z, w, pub);

  //Verify x = r
  return x.toscalar() == sig.r;
}
