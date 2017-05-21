#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include <string>
#include "keys.hpp"
#include "block.hpp"

class Plaintext;
class Ciphertext;
class Signature;

class RawBlock : public Block {
private:
  unsigned char element[64];

public:
  void frombytes(const unsigned char in[64]);
  void tobytes(unsigned char out[64]);
  Signature sign(Private_Key sk);
  bool verify(Signature sig, Public_Key sk);

  // RawBlocks must be en and decodable
  // virtual std::string enc() = 0;
  // virtual void dec(std::string in) = 0;
  std::string enc();
  void dec(std::string in);
};

class Plaintext : public RawBlock {
public:
  Ciphertext encrypt(Public_Key pk);

  // std::string enc();
  // void dec(std::string);
};

class Ciphertext : public RawBlock {
public:
  Plaintext decrypt(Private_Key sk);

  // std::string enc();
  //void dec(std::string in);
};


class Signature {
public:
  Scalar r;
  Scalar s;

  std::string enc();
  void dec(std::string);
};

#endif //MESSAGES_HPP
