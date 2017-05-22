#include "mysha.hpp"
#include <openssl/evp.h>
#include <string>

void mysha512(unsigned char message[64], unsigned char digest[64]){
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
