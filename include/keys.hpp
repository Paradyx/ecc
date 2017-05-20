#ifndef KEYS_HPP_
#define KEYS_HPP_

#include <string>
#include "point.hpp"
#include "scalar.hpp"

class Public_Key : public Point {};

class Private_Key : public Scalar {
public:
  Private_Key(){
    b = false;
  }
  void generate();
  Public_Key get_pub();
private:
  // True iff key is initialized
  bool b;
};

#endif //KEYS_HPP_
