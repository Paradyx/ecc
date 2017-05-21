#include "keys.hpp"
#include "param.hpp"
#include "debug.hpp"

void Private_Key::generate(){
  Debug::Write("Generating Private Key..");
  fromrandom();
  this->b = true;
}

Public_Key Private_Key::get_pub(){
  Debug::Write("Generating Public Key..");
  Public_Key pub;
  Point base;
  base.frombytes(M511.g);
  scalarmult(pub, *this, base);
  return pub;
}
