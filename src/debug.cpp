#include "debug.hpp"

#include "appinfo.hpp"

#include <cstdio>
#include <cstdarg>

void Debug::Write(const char *szFormat, ...){

  #ifdef DEBUG
  if(level == true){
    va_list args;
    va_start(args, szFormat);
    vprintf(szFormat, args);
    printf("\n");
    va_end(args);
  }
  #endif //DEBUG
}

bool Debug::level;

void Debug::SetLevel(bool b){
  level = b;
}
