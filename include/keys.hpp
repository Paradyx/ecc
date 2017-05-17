#ifndef KEYS_HPP_
#define KEYS_HPP_

#include <string>
#include "scalarmult.hpp"

class Public_Key {
public:
  Public_Key(){}
  ~Public_Key(){}
  void from_string(std::string in);
  std::string to_string();
private:
  //public point Q = d*G
  char q[64];
};

class Private_Key {
public:
  Private_Key(){
    b = false;
  }
  ~Private_Key(){}
  void generate();
  void from_string(std::string in);
  std::string to_string();
  Public_Key get_pub();
private:
  // True iff key is initialized
  bool b;
  // private integer d
  char d[64];
  // curve parameter
  // public base point G
  char g[64];
};



#endif //KEYS_HPP_
