#include "messages.hpp"
#include <string>
#include <iostream>
#include <openssl/evp.h>
#include "param.hpp"
#include "keys.hpp"
#include "scalar.hpp"
#include "messages.hpp"

static void mysha512(unsigned char message[64], unsigned char digest[64]){
  EVP_MD_CTX *mdctx;
  const EVP_MD *md;
  unsigned int md_len, i;

  OpenSSL_add_all_digests();
  md = EVP_get_digestbyname("SHA512");

  if(!md) {
        printf("Unknown message digest\n");
        exit(1);
  }

  mdctx = EVP_MD_CTX_create();
  EVP_DigestInit_ex(mdctx, md, NULL);
  EVP_DigestUpdate(mdctx, message, 64);
  EVP_DigestFinal_ex(mdctx, digest, &md_len);
  EVP_MD_CTX_destroy(mdctx);

  printf("Digest is: ");
  for(i = 0; i < md_len; i++)
        printf("%02x", digest[i]);
  printf("\n");

  /* Call this once before exit. */
  EVP_cleanup();
}

Signature RawBlock::sign(Private_Key &sk){
  // ECDSA Schoolbook
  // Calculate hash of message
  unsigned char digest[SHA512_DIGEST_LENGTH];
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
