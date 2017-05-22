#include "messages.hpp"
#include "base64.hpp"
#include <algorithm>
#include <string>
#include <assert.h>

std::string RawBlock::enc(){
  return base64_encode(element, 64);
}
void RawBlock::dec(std::string in){
  fromstring(base64_decode(in));

}

std::string Signature::enc(){
  unsigned char tmp[128];
  r.tobytes(tmp);
  s.tobytes(tmp+64);
  return base64_encode(tmp, 128);
}

void Signature::dec(std::string in){
  std::string combined;
  combined = base64_decode(in);
  assert(combined.length() == 128);
  r.fromstring(combined.substr(0, 64));
  s.fromstring(combined.substr(64, 128));
}
