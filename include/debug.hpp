#ifndef DEBUG_HPP_
#define DEBUG_HPP_

class Debug
{
public:
  static void Write(const char *szFormat,...);
  static void SetLevel(bool b);

private:
  static bool level;
};

#endif //DEBUG_HPP
