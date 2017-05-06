#ifndef FE_HPP
#define FE_HPP

// include constant implementation if FE_CONST = 1
#if FE_CONST=1
#include "fe_const.hpp"
#else
#undef FE_CONST
#define FE_CONST 0
#include "fe_const.hpp"
#endif //FE_CONST

#endif //FE_HPP
