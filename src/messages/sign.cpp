#include "messages.hpp"
#include <string.h>
#include <iostream>
#include <openssl/sha.h>
#include "param.hpp"
#include "keys.hpp"
#include "scalar.hpp"
#include "messages.hpp"

Signature RawBlock::sign(Private_Key sk){
    // ECDSA Schoolbook
  // Calculate hash of message
  unsigned char digest[SHA512_DIGEST_LENGTH];
  const char *input = (const char*) element;

  SHA512((unsigned char*)&input, strlen(input), (unsigned char*)&digest);

  std::cout << digest << std::endl;
  std::cout << SHA512_DIGEST_LENGTH << std::endl;

  char mdString[SHA512_DIGEST_LENGTH*2+1];
  for(int i = 0; i < SHA512_DIGEST_LENGTH; i++)
         sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    printf("SHA512 digest: %s\n", mdString);
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

  // Calculate s
  Scalar s;
  s = k_inv*(z+r*sk);

  // Resulting Signature: (s,r)
  Signature sig;
  sig.s = s;
  sig.r = r;
  return sig;
}
