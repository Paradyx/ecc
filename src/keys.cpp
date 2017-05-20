#include "keys.hpp"
//#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <string.h>
#include <assert.h>

#include "param.hpp"

void Private_Key::generate(){
  fromrandom();
  this->b = true;
}

Public_Key Private_Key::get_pub(){
  Point pub;
  Point base;
  base.frombytes(M511.g);

  scalarmult(pub, *this, base);
}
