#ifdef FE_CONST_HPP

#include "fe_const.hpp"

Fe operator*(const Fe& a, const Fe& b){
  int32_t f0 = a.t[0];
  int32_t f1 = a.t[1];
  int32_t f2 = a.t[2];
  int32_t f3 = a.t[3];
  int32_t f4 = a.t[4];
  int32_t f5 = a.t[5];
  int32_t f6 = a.t[6];
  int32_t f7 = a.t[7];
  int32_t f8 = a.t[8];
  int32_t f9 = a.t[9];
  int32_t f10 = a.t[10];
  int32_t f11 = a.t[11];
  int32_t f12 = a.t[12];
  int32_t f13 = a.t[13];
  int32_t f14 = a.t[14];
  int32_t f15 = a.t[15];
  int32_t f16 = a.t[16];
  int32_t f17 = a.t[17];
  int32_t f18 = a.t[18];
  int32_t f19 = a.t[19];
  int32_t g0 = b.t[0];
  int32_t g1 = b.t[1];
  int32_t g2 = b.t[2];
  int32_t g3 = b.t[3];
  int32_t g4 = b.t[4];
  int32_t g5 = b.t[5];
  int32_t g6 = b.t[6];
  int32_t g7 = b.t[7];
  int32_t g8 = b.t[8];
  int32_t g9 = b.t[9];
  int32_t g10 = b.t[10];
  int32_t g11 = b.t[11];
  int32_t g12 = b.t[12];
  int32_t g13 = b.t[13];
  int32_t g14 = b.t[14];
  int32_t g15 = b.t[15];
  int32_t g16 = b.t[16];
  int32_t g17 = b.t[17];
  int32_t g18 = b.t[18];
  int32_t g19 = b.t[19];

  int64_t f0g1 = f0 * (int64_t) g1; //<2^52
  int64_t f0g0 = f0 * (int64_t) g0;
  int64_t f0g2 = f0 * (int64_t) g2;
  int64_t f0g3 = f0 * (int64_t) g3;
  int64_t f0g4 = f0 * (int64_t) g4;
  int64_t f0g5 = f0 * (int64_t) g5;
  int64_t f0g6 = f0 * (int64_t) g6;
  int64_t f0g7 = f0 * (int64_t) g7;
  int64_t f0g8 = f0 * (int64_t) g8;
  int64_t f0g9 = f0 * (int64_t) g9;
  int64_t f0g10 = f0 * (int64_t) g10;
  int64_t f0g11 = f0 * (int64_t) g11;
  int64_t f0g12 = f0 * (int64_t) g12;
  int64_t f0g13 = f0 * (int64_t) g13;
  int64_t f0g14 = f0 * (int64_t) g14;
  int64_t f0g15 = f0 * (int64_t) g15;
  int64_t f0g16 = f0 * (int64_t) g16;
  int64_t f0g17 = f0 * (int64_t) g17;
  int64_t f0g18 = f0 * (int64_t) g18;
  int64_t f0g19 = f0 * (int64_t) g19;
  int64_t f1g0 = f1 * (int64_t) g0;
  int64_t f1g1 = f1 * (int64_t) g1;
  int64_t f1g2 = f1 * (int64_t) g2;
  int64_t f1g3 = f1 * (int64_t) g3;
  int64_t f1g4 = f1 * (int64_t) g4;
  int64_t f1g5 = f1 * (int64_t) g5;
  int64_t f1g6 = f1 * (int64_t) g6;
  int64_t f1g7 = f1 * (int64_t) g7;
  int64_t f1g8 = f1 * (int64_t) g8;
  int64_t f1g9 = f1 * (int64_t) g9;
  int64_t f1g10 = f1 * (int64_t) g10;
  int64_t f1g11 = f1 * (int64_t) g11;
  int64_t f1g12 = f1 * (int64_t) g12;
  int64_t f1g13 = f1 * (int64_t) g13;
  int64_t f1g14 = f1 * (int64_t) g14;
  int64_t f1g15 = f1 * (int64_t) g15;
  int64_t f1g16 = f1 * (int64_t) g16;
  int64_t f1g17 = f1 * (int64_t) g17;
  int64_t f1g18 = f1 * (int64_t) g18;
  int64_t f1g19 = f1 * (int64_t) g19;
  int64_t f2g0 = f2 * (int64_t) g0;
  int64_t f2g1 = f2 * (int64_t) g1;
  int64_t f2g2 = f2 * (int64_t) g2;
  int64_t f2g3 = f2 * (int64_t) g3;
  int64_t f2g4 = f2 * (int64_t) g4;
  int64_t f2g5 = f2 * (int64_t) g5;
  int64_t f2g6 = f2 * (int64_t) g6;
  int64_t f2g7 = f2 * (int64_t) g7;
  int64_t f2g8 = f2 * (int64_t) g8;
  int64_t f2g9 = f2 * (int64_t) g9;
  int64_t f2g10 = f2 * (int64_t) g10;
  int64_t f2g11 = f2 * (int64_t) g11;
  int64_t f2g12 = f2 * (int64_t) g12;
  int64_t f2g13 = f2 * (int64_t) g13;
  int64_t f2g14 = f2 * (int64_t) g14;
  int64_t f2g15 = f2 * (int64_t) g15;
  int64_t f2g16 = f2 * (int64_t) g16;
  int64_t f2g17 = f2 * (int64_t) g17;
  int64_t f2g18 = f2 * (int64_t) g18;
  int64_t f2g19 = f2 * (int64_t) g19;
  int64_t f3g0 = f3 * (int64_t) g0;
  int64_t f3g1 = f3 * (int64_t) g1;
  int64_t f3g2 = f3 * (int64_t) g2;
  int64_t f3g3 = f3 * (int64_t) g3;
  int64_t f3g4 = f3 * (int64_t) g4;
  int64_t f3g5 = f3 * (int64_t) g5;
  int64_t f3g6 = f3 * (int64_t) g6;
  int64_t f3g7 = f3 * (int64_t) g7;
  int64_t f3g8 = f3 * (int64_t) g8;
  int64_t f3g9 = f3 * (int64_t) g9;
  int64_t f3g10 = f3 * (int64_t) g10;
  int64_t f3g11 = f3 * (int64_t) g11;
  int64_t f3g12 = f3 * (int64_t) g12;
  int64_t f3g13 = f3 * (int64_t) g13;
  int64_t f3g14 = f3 * (int64_t) g14;
  int64_t f3g15 = f3 * (int64_t) g15;
  int64_t f3g16 = f3 * (int64_t) g16;
  int64_t f3g17 = f3 * (int64_t) g17;
  int64_t f3g18 = f3 * (int64_t) g18;
  int64_t f3g19 = f3 * (int64_t) g19;
  int64_t f4g0 = f4 * (int64_t) g0;
  int64_t f4g1 = f4 * (int64_t) g1;
  int64_t f4g2 = f4 * (int64_t) g2;
  int64_t f4g3 = f4 * (int64_t) g3;
  int64_t f4g4 = f4 * (int64_t) g4;
  int64_t f4g5 = f4 * (int64_t) g5;
  int64_t f4g6 = f4 * (int64_t) g6;
  int64_t f4g7 = f4 * (int64_t) g7;
  int64_t f4g8 = f4 * (int64_t) g8;
  int64_t f4g9 = f4 * (int64_t) g9;
  int64_t f4g10 = f4 * (int64_t) g10;
  int64_t f4g11 = f4 * (int64_t) g11;
  int64_t f4g12 = f4 * (int64_t) g12;
  int64_t f4g13 = f4 * (int64_t) g13;
  int64_t f4g14 = f4 * (int64_t) g14;
  int64_t f4g15 = f4 * (int64_t) g15;
  int64_t f4g16 = f4 * (int64_t) g16;
  int64_t f4g17 = f4 * (int64_t) g17;
  int64_t f4g18 = f4 * (int64_t) g18;
  int64_t f4g19 = f4 * (int64_t) g19;
  int64_t f5g0 = f5 * (int64_t) g0;
  int64_t f5g1 = f5 * (int64_t) g1;
  int64_t f5g2 = f5 * (int64_t) g2;
  int64_t f5g3 = f5 * (int64_t) g3;
  int64_t f5g4 = f5 * (int64_t) g4;
  int64_t f5g5 = f5 * (int64_t) g5;
  int64_t f5g6 = f5 * (int64_t) g6;
  int64_t f5g7 = f5 * (int64_t) g7;
  int64_t f5g8 = f5 * (int64_t) g8;
  int64_t f5g9 = f5 * (int64_t) g9;
  int64_t f5g10 = f5 * (int64_t) g10;
  int64_t f5g11 = f5 * (int64_t) g11;
  int64_t f5g12 = f5 * (int64_t) g12;
  int64_t f5g13 = f5 * (int64_t) g13;
  int64_t f5g14 = f5 * (int64_t) g14;
  int64_t f5g15 = f5 * (int64_t) g15;
  int64_t f5g16 = f5 * (int64_t) g16;
  int64_t f5g17 = f5 * (int64_t) g17;
  int64_t f5g18 = f5 * (int64_t) g18;
  int64_t f5g19 = f5 * (int64_t) g19;
  int64_t f6g0 = f6 * (int64_t) g0;
  int64_t f6g1 = f6 * (int64_t) g1;
  int64_t f6g2 = f6 * (int64_t) g2;
  int64_t f6g3 = f6 * (int64_t) g3;
  int64_t f6g4 = f6 * (int64_t) g4;
  int64_t f6g5 = f6 * (int64_t) g5;
  int64_t f6g6 = f6 * (int64_t) g6;
  int64_t f6g7 = f6 * (int64_t) g7;
  int64_t f6g8 = f6 * (int64_t) g8;
  int64_t f6g9 = f6 * (int64_t) g9;
  int64_t f6g10 = f6 * (int64_t) g10;
  int64_t f6g11 = f6 * (int64_t) g11;
  int64_t f6g12 = f6 * (int64_t) g12;
  int64_t f6g13 = f6 * (int64_t) g13;
  int64_t f6g14 = f6 * (int64_t) g14;
  int64_t f6g15 = f6 * (int64_t) g15;
  int64_t f6g16 = f6 * (int64_t) g16;
  int64_t f6g17 = f6 * (int64_t) g17;
  int64_t f6g18 = f6 * (int64_t) g18;
  int64_t f6g19 = f6 * (int64_t) g19;
  int64_t f7g0 = f7 * (int64_t) g0;
  int64_t f7g1 = f7 * (int64_t) g1;
  int64_t f7g2 = f7 * (int64_t) g2;
  int64_t f7g3 = f7 * (int64_t) g3;
  int64_t f7g4 = f7 * (int64_t) g4;
  int64_t f7g5 = f7 * (int64_t) g5;
  int64_t f7g6 = f7 * (int64_t) g6;
  int64_t f7g7 = f7 * (int64_t) g7;
  int64_t f7g8 = f7 * (int64_t) g8;
  int64_t f7g9 = f7 * (int64_t) g9;
  int64_t f7g10 = f7 * (int64_t) g10;
  int64_t f7g11 = f7 * (int64_t) g11;
  int64_t f7g12 = f7 * (int64_t) g12;
  int64_t f7g13 = f7 * (int64_t) g13;
  int64_t f7g14 = f7 * (int64_t) g14;
  int64_t f7g15 = f7 * (int64_t) g15;
  int64_t f7g16 = f7 * (int64_t) g16;
  int64_t f7g17 = f7 * (int64_t) g17;
  int64_t f7g18 = f7 * (int64_t) g18;
  int64_t f7g19 = f7 * (int64_t) g19;
  int64_t f8g0 = f8 * (int64_t) g0;
  int64_t f8g1 = f8 * (int64_t) g1;
  int64_t f8g2 = f8 * (int64_t) g2;
  int64_t f8g3 = f8 * (int64_t) g3;
  int64_t f8g4 = f8 * (int64_t) g4;
  int64_t f8g5 = f8 * (int64_t) g5;
  int64_t f8g6 = f8 * (int64_t) g6;
  int64_t f8g7 = f8 * (int64_t) g7;
  int64_t f8g8 = f8 * (int64_t) g8;
  int64_t f8g9 = f8 * (int64_t) g9;
  int64_t f8g10 = f8 * (int64_t) g10;
  int64_t f8g11 = f8 * (int64_t) g11;
  int64_t f8g12 = f8 * (int64_t) g12;
  int64_t f8g13 = f8 * (int64_t) g13;
  int64_t f8g14 = f8 * (int64_t) g14;
  int64_t f8g15 = f8 * (int64_t) g15;
  int64_t f8g16 = f8 * (int64_t) g16;
  int64_t f8g17 = f8 * (int64_t) g17;
  int64_t f8g18 = f8 * (int64_t) g18;
  int64_t f8g19 = f8 * (int64_t) g19;
  int64_t f9g0 = f9 * (int64_t) g0;
  int64_t f9g1 = f9 * (int64_t) g1;
  int64_t f9g2 = f9 * (int64_t) g2;
  int64_t f9g3 = f9 * (int64_t) g3;
  int64_t f9g4 = f9 * (int64_t) g4;
  int64_t f9g5 = f9 * (int64_t) g5;
  int64_t f9g6 = f9 * (int64_t) g6;
  int64_t f9g7 = f9 * (int64_t) g7;
  int64_t f9g8 = f9 * (int64_t) g8;
  int64_t f9g9 = f9 * (int64_t) g9;
  int64_t f9g10 = f9 * (int64_t) g10;
  int64_t f9g11 = f9 * (int64_t) g11;
  int64_t f9g12 = f9 * (int64_t) g12;
  int64_t f9g13 = f9 * (int64_t) g13;
  int64_t f9g14 = f9 * (int64_t) g14;
  int64_t f9g15 = f9 * (int64_t) g15;
  int64_t f9g16 = f9 * (int64_t) g16;
  int64_t f9g17 = f9 * (int64_t) g17;
  int64_t f9g18 = f9 * (int64_t) g18;
  int64_t f9g19 = f9 * (int64_t) g19;
  int64_t f10g0 = f10 * (int64_t) g0;
  int64_t f10g1 = f10 * (int64_t) g1;
  int64_t f10g2 = f10 * (int64_t) g2;
  int64_t f10g3 = f10 * (int64_t) g3;
  int64_t f10g4 = f10 * (int64_t) g4;
  int64_t f10g5 = f10 * (int64_t) g5;
  int64_t f10g6 = f10 * (int64_t) g6;
  int64_t f10g7 = f10 * (int64_t) g7;
  int64_t f10g8 = f10 * (int64_t) g8;
  int64_t f10g9 = f10 * (int64_t) g9;
  int64_t f10g10 = f10 * (int64_t) g10;
  int64_t f10g11 = f10 * (int64_t) g11;
  int64_t f10g12 = f10 * (int64_t) g12;
  int64_t f10g13 = f10 * (int64_t) g13;
  int64_t f10g14 = f10 * (int64_t) g14;
  int64_t f10g15 = f10 * (int64_t) g15;
  int64_t f10g16 = f10 * (int64_t) g16;
  int64_t f10g17 = f10 * (int64_t) g17;
  int64_t f10g18 = f10 * (int64_t) g18;
  int64_t f10g19 = f10 * (int64_t) g19;
  int64_t f11g0 = f11 * (int64_t) g0;
  int64_t f11g1 = f11 * (int64_t) g1;
  int64_t f11g2 = f11 * (int64_t) g2;
  int64_t f11g3 = f11 * (int64_t) g3;
  int64_t f11g4 = f11 * (int64_t) g4;
  int64_t f11g5 = f11 * (int64_t) g5;
  int64_t f11g6 = f11 * (int64_t) g6;
  int64_t f11g7 = f11 * (int64_t) g7;
  int64_t f11g8 = f11 * (int64_t) g8;
  int64_t f11g9 = f11 * (int64_t) g9;
  int64_t f11g10 = f11 * (int64_t) g10;
  int64_t f11g11 = f11 * (int64_t) g11;
  int64_t f11g12 = f11 * (int64_t) g12;
  int64_t f11g13 = f11 * (int64_t) g13;
  int64_t f11g14 = f11 * (int64_t) g14;
  int64_t f11g15 = f11 * (int64_t) g15;
  int64_t f11g16 = f11 * (int64_t) g16;
  int64_t f11g17 = f11 * (int64_t) g17;
  int64_t f11g18 = f11 * (int64_t) g18;
  int64_t f11g19 = f11 * (int64_t) g19;
  int64_t f12g0 = f12 * (int64_t) g0;
  int64_t f12g1 = f12 * (int64_t) g1;
  int64_t f12g2 = f12 * (int64_t) g2;
  int64_t f12g3 = f12 * (int64_t) g3;
  int64_t f12g4 = f12 * (int64_t) g4;
  int64_t f12g5 = f12 * (int64_t) g5;
  int64_t f12g6 = f12 * (int64_t) g6;
  int64_t f12g7 = f12 * (int64_t) g7;
  int64_t f12g8 = f12 * (int64_t) g8;
  int64_t f12g9 = f12 * (int64_t) g9;
  int64_t f12g10 = f12 * (int64_t) g10;
  int64_t f12g11 = f12 * (int64_t) g11;
  int64_t f12g12 = f12 * (int64_t) g12;
  int64_t f12g13 = f12 * (int64_t) g13;
  int64_t f12g14 = f12 * (int64_t) g14;
  int64_t f12g15 = f12 * (int64_t) g15;
  int64_t f12g16 = f12 * (int64_t) g16;
  int64_t f12g17 = f12 * (int64_t) g17;
  int64_t f12g18 = f12 * (int64_t) g18;
  int64_t f12g19 = f12 * (int64_t) g19;
  int64_t f13g0 = f13 * (int64_t) g0;
  int64_t f13g1 = f13 * (int64_t) g1;
  int64_t f13g2 = f13 * (int64_t) g2;
  int64_t f13g3 = f13 * (int64_t) g3;
  int64_t f13g4 = f13 * (int64_t) g4;
  int64_t f13g5 = f13 * (int64_t) g5;
  int64_t f13g6 = f13 * (int64_t) g6;
  int64_t f13g7 = f13 * (int64_t) g7;
  int64_t f13g8 = f13 * (int64_t) g8;
  int64_t f13g9 = f13 * (int64_t) g9;
  int64_t f13g10 = f13 * (int64_t) g10;
  int64_t f13g11 = f13 * (int64_t) g11;
  int64_t f13g12 = f13 * (int64_t) g12;
  int64_t f13g13 = f13 * (int64_t) g13;
  int64_t f13g14 = f13 * (int64_t) g14;
  int64_t f13g15 = f13 * (int64_t) g15;
  int64_t f13g16 = f13 * (int64_t) g16;
  int64_t f13g17 = f13 * (int64_t) g17;
  int64_t f13g18 = f13 * (int64_t) g18;
  int64_t f13g19 = f13 * (int64_t) g19;
  int64_t f14g0 = f14 * (int64_t) g0;
  int64_t f14g1 = f14 * (int64_t) g1;
  int64_t f14g2 = f14 * (int64_t) g2;
  int64_t f14g3 = f14 * (int64_t) g3;
  int64_t f14g4 = f14 * (int64_t) g4;
  int64_t f14g5 = f14 * (int64_t) g5;
  int64_t f14g6 = f14 * (int64_t) g6;
  int64_t f14g7 = f14 * (int64_t) g7;
  int64_t f14g8 = f14 * (int64_t) g8;
  int64_t f14g9 = f14 * (int64_t) g9;
  int64_t f14g10 = f14 * (int64_t) g10;
  int64_t f14g11 = f14 * (int64_t) g11;
  int64_t f14g12 = f14 * (int64_t) g12;
  int64_t f14g13 = f14 * (int64_t) g13;
  int64_t f14g14 = f14 * (int64_t) g14;
  int64_t f14g15 = f14 * (int64_t) g15;
  int64_t f14g16 = f14 * (int64_t) g16;
  int64_t f14g17 = f14 * (int64_t) g17;
  int64_t f14g18 = f14 * (int64_t) g18;
  int64_t f14g19 = f14 * (int64_t) g19;
  int64_t f15g0 = f15 * (int64_t) g0;
  int64_t f15g1 = f15 * (int64_t) g1;
  int64_t f15g2 = f15 * (int64_t) g2;
  int64_t f15g3 = f15 * (int64_t) g3;
  int64_t f15g4 = f15 * (int64_t) g4;
  int64_t f15g5 = f15 * (int64_t) g5;
  int64_t f15g6 = f15 * (int64_t) g6;
  int64_t f15g7 = f15 * (int64_t) g7;
  int64_t f15g8 = f15 * (int64_t) g8;
  int64_t f15g9 = f15 * (int64_t) g9;
  int64_t f15g10 = f15 * (int64_t) g10;
  int64_t f15g11 = f15 * (int64_t) g11;
  int64_t f15g12 = f15 * (int64_t) g12;
  int64_t f15g13 = f15 * (int64_t) g13;
  int64_t f15g14 = f15 * (int64_t) g14;
  int64_t f15g15 = f15 * (int64_t) g15;
  int64_t f15g16 = f15 * (int64_t) g16;
  int64_t f15g17 = f15 * (int64_t) g17;
  int64_t f15g18 = f15 * (int64_t) g18;
  int64_t f15g19 = f15 * (int64_t) g19;
  int64_t f16g0 = f16 * (int64_t) g0;
  int64_t f16g1 = f16 * (int64_t) g1;
  int64_t f16g2 = f16 * (int64_t) g2;
  int64_t f16g3 = f16 * (int64_t) g3;
  int64_t f16g4 = f16 * (int64_t) g4;
  int64_t f16g5 = f16 * (int64_t) g5;
  int64_t f16g6 = f16 * (int64_t) g6;
  int64_t f16g7 = f16 * (int64_t) g7;
  int64_t f16g8 = f16 * (int64_t) g8;
  int64_t f16g9 = f16 * (int64_t) g9;
  int64_t f16g10 = f16 * (int64_t) g10;
  int64_t f16g11 = f16 * (int64_t) g11;
  int64_t f16g12 = f16 * (int64_t) g12;
  int64_t f16g13 = f16 * (int64_t) g13;
  int64_t f16g14 = f16 * (int64_t) g14;
  int64_t f16g15 = f16 * (int64_t) g15;
  int64_t f16g16 = f16 * (int64_t) g16;
  int64_t f16g17 = f16 * (int64_t) g17;
  int64_t f16g18 = f16 * (int64_t) g18;
  int64_t f16g19 = f16 * (int64_t) g19;
  int64_t f17g0 = f17 * (int64_t) g0;
  int64_t f17g1 = f17 * (int64_t) g1;
  int64_t f17g2 = f17 * (int64_t) g2;
  int64_t f17g3 = f17 * (int64_t) g3;
  int64_t f17g4 = f17 * (int64_t) g4;
  int64_t f17g5 = f17 * (int64_t) g5;
  int64_t f17g6 = f17 * (int64_t) g6;
  int64_t f17g7 = f17 * (int64_t) g7;
  int64_t f17g8 = f17 * (int64_t) g8;
  int64_t f17g9 = f17 * (int64_t) g9;
  int64_t f17g10 = f17 * (int64_t) g10;
  int64_t f17g11 = f17 * (int64_t) g11;
  int64_t f17g12 = f17 * (int64_t) g12;
  int64_t f17g13 = f17 * (int64_t) g13;
  int64_t f17g14 = f17 * (int64_t) g14;
  int64_t f17g15 = f17 * (int64_t) g15;
  int64_t f17g16 = f17 * (int64_t) g16;
  int64_t f17g17 = f17 * (int64_t) g17;
  int64_t f17g18 = f17 * (int64_t) g18;
  int64_t f17g19 = f17 * (int64_t) g19;
  int64_t f18g0 = f18 * (int64_t) g0;
  int64_t f18g1 = f18 * (int64_t) g1;
  int64_t f18g2 = f18 * (int64_t) g2;
  int64_t f18g3 = f18 * (int64_t) g3;
  int64_t f18g4 = f18 * (int64_t) g4;
  int64_t f18g5 = f18 * (int64_t) g5;
  int64_t f18g6 = f18 * (int64_t) g6;
  int64_t f18g7 = f18 * (int64_t) g7;
  int64_t f18g8 = f18 * (int64_t) g8;
  int64_t f18g9 = f18 * (int64_t) g9;
  int64_t f18g10 = f18 * (int64_t) g10;
  int64_t f18g11 = f18 * (int64_t) g11;
  int64_t f18g12 = f18 * (int64_t) g12;
  int64_t f18g13 = f18 * (int64_t) g13;
  int64_t f18g14 = f18 * (int64_t) g14;
  int64_t f18g15 = f18 * (int64_t) g15;
  int64_t f18g16 = f18 * (int64_t) g16;
  int64_t f18g17 = f18 * (int64_t) g17;
  int64_t f18g18 = f18 * (int64_t) g18;
  int64_t f18g19 = f18 * (int64_t) g19;
  int64_t f19g0 = f19 * (int64_t) g0;
  int64_t f19g1 = f19 * (int64_t) g1;
  int64_t f19g2 = f19 * (int64_t) g2;
  int64_t f19g3 = f19 * (int64_t) g3;
  int64_t f19g4 = f19 * (int64_t) g4;
  int64_t f19g5 = f19 * (int64_t) g5;
  int64_t f19g6 = f19 * (int64_t) g6;
  int64_t f19g7 = f19 * (int64_t) g7;
  int64_t f19g8 = f19 * (int64_t) g8;
  int64_t f19g9 = f19 * (int64_t) g9;
  int64_t f19g10 = f19 * (int64_t) g10;
  int64_t f19g11 = f19 * (int64_t) g11;
  int64_t f19g12 = f19 * (int64_t) g12;
  int64_t f19g13 = f19 * (int64_t) g13;
  int64_t f19g14 = f19 * (int64_t) g14;
  int64_t f19g15 = f19 * (int64_t) g15;
  int64_t f19g16 = f19 * (int64_t) g16;
  int64_t f19g17 = f19 * (int64_t) g17;
  int64_t f19g18 = f19 * (int64_t) g18;
  int64_t f19g19 = f19 * (int64_t) g19;

  int64_t h0_374 = f1g19+f2g18+f3g17+f4g16+f5g15+f6g14+f7g13+f8g12+f9g11+f10g10+f11g9+f12g8+f13g7+f14g6+f15g5+f16g4+f17g3+f18g2+f19g1; //< 2^52*19 < 2^52*2^5 < 2^57
  int64_t carry0_374 = h0_374>>26; h0_374 -= carry0_374 << 26; // carry0 < 2^31
  int64_t h0 = f0g0 + h0_374 * 374; //

  int64_t h1_374 = f2g19+f4g17+f6g15+f8g13+f10g11+f11g10+f13g8+f15g6+f17g4+f19g2+carry0_374; // < 2^52*11 < 2^52*2^4 < 2^56
  int64_t h1_187 = f3g18+f5g16+f7g14+f9g12+f12g9+f14g7+f16g5+f18g3+h1_374<<1;// < 2^52*2^4 +2^57< 2^58
  int64_t carry1_187 = h1_187>>26; h1_187 -= carry1_187 << 26; // carry1 < 2^32; h_187 < 2^26
  int64_t h1 = f0g1 + f1g0 + h1_187 * 187;
  //h1  = f0g1 +1   f1g0 +374 f2g19+187 f3g18+374 f4g17+187 f5g16+374 f6g15+187 f7g14+374 f8g13+187 f9g12+374 f10g11+374 f11g10+187 f12g9+374 f13g8+187 f14g7+374 f15g6+187 f16g5+374 f17g4+187 f18g3+374 f19g2

  int64_t h2_374 = f11g11; // < 2^53
  int64_t h2_187 = f3g19+f4g18+f5g17+f6g16+f7g15+f8g14+f9g13+f10g12+f12g10+f13g9+f14g8+f15g7+f16g6+f17g5+f18g4+f19g3+h2_374<<1+carry1_187; //2^52*16 +2^26*374< 2^52*2^5 +2^26*2^9< 2^58
  int64_t carry2_374 = h2_187>>26; h2_187 -= carry2_374 << 26; //carry2 < 2^32; h_187 < 2^26
  int64_t h2  = f0g2+f1g1+f2g0+187*h2_187;//2^26*3+2^31*2^8 < 2^40

  int64_t h3_374 = f4g19+f6g17+f8g15+f10g13+f11g12+f12g11+f13g10+f15g8+f17g6+f19g4+carry2_374; // 2^52*10 + 2^32 < 2^52*2^4 + 2^32< 2^57
  int64_t h3_187 = f5g18+f7g16+f9g14+f14g9+f16g7+f18g5+h3_374<<1; // 2^26*6 + 2^58< 2^59
  int64_t carry3_187 = h3_187>>26; h3_187 -= carry3_187 << 26; // carry3 < 2^33, h_187 < 2^26
  int64_t h3  = f0g3+f3g0+2*(f1g2 +f2g1)+187*h3_187; // 2^56

  int64_t h4_374 = f11g13+f13g11; // < 2^53
  int64_t h4_187 = f5g19+f6g18+f7g17+f8g16+f9g15+f10g14+f12g12+f14g10+f15g9+f16g8+f17g7+f18g6+f19g5+2*h4_374+carry3_187; // 2^52*13 + 2^53 + 2^33 < 2^57
  int64_t carry4_374 = h4_187>>26; h4_187 -= carry4_374 << 26; // carry4 < 2^32; h_187 < 2^26
  int64_t h4 =f0g4+f1g3+2*f2g2+f3g1+f4g0+187*h4_187; // 2^56

  int64_t h5_374 = f6g19+f8g17+f10g15+f11g14+f12g13+f13g12+f14g11+f15g10+f17g8+f19g6+carry4_374; // 2^52*12 < 2^56
  int64_t h5_187 = f7g18+f9g16+f16g9+f18g7+h5_374<<1; // 2^58
  int64_t carry5_187 = h5_187>>26; h5_187 -= carry5_187 << 26; // carry5 < 2^32, h_187 < 2^26
  int64_t h5  = f0g5 +f5g0+2*(f1g4+f2g3+f3g2+f4g1)+187*h5_187; // 2^56

  int64_t h6_374 = f11g15+f13g13+f15g11; //2^54
  int64_t h6_187 = f7g19+f8g18+f9g17+f10g16+f12g14+f14g12+f16g10+f17g9+f18g8+f19g7+h6_374<<1+carry5_187; // 2^57
  int64_t carry6_374 = h6_187>>26; h6_187 -= carry6_374 << 26; // carry6 < 2^32, h187 < 2^26
  int64_t h6 = f0g6+f1g5+f3g3+f5g1+f6g0+2*(f2g4+f4g2)+h6_187; // 2^56

  int64_t h7_374 = f8g19+f10g17+f11g16+f12g15+f13g14+f14g13+f15g12+f16g11+f17g10+f19g8+carry6_374; // 2^56
  int64_t h7_187 = f9g18+f18g9+h7_374<<1;// 2^57
  int64_t carry7_187 = h7_187>>26; h7_187 -= carry7_187 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h7 = f0g7+f7g0+2*(f1g6+f2g5+f3g4+f4g3+f5g2+f6g1)+187*h7_187;// 2^56

  int64_t h8_374 = f11g17+f13g15+f15g13+f17g11; // 2^54
  int64_t h8_187 = f9g19+f10g18+f12g16+f14g14+f16g12+f18g10+f19g9+h8_374<<1+carry7_187;// 2^57
  int64_t carry8_374 = h8_187>>26; h8_187 -= carry8_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h8 = f0g8+f1g7+f3g5+f5g3+f7g1+f8g0+2*(f2g6+f4g4+f6g2)+187*h8_187;

  int64_t h9_374 = f10g19+f11g18+f12g17+f13g16+f14g15+f15g14+f16g13+f17g12+f18g11+f19g10+carry8_374; // 2^56
  int64_t carry9_374 = h9_374>>26; h9_374 -= carry9_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h9 = f0g9+f9g0+2*(f1g8+f2g7+f3g6+f4g5+f5g4+f6g3+f7g2+f8g1)+374*h9_374;

  int64_t h10_374 = f11g19+f13g17+f15g15+f17g13+f19g11+carry9_374; // 2^54
  int64_t h10_187 = f12g18+f14g16+f16g14+f18g12+h10_374<<1;// 2^57
  int64_t carry10_187 = h10_187>>26; h10_187 -= carry10_187 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h10 = f0g10+f1g9+f3g7+f5g5+f7g3+f9g1+f10g0+2*(f2g8+f4g6+f6g4+f8g2)+187*h10_187;

  int64_t h11_187 = f12g19+f13g18+f14g17+f15g16+f16g15+f17g14+f18g13+f19g12+carry10_187;// 2^57
  int64_t carry11_374 = h11_187>>26; h11_187 -= carry11_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h11 = f0g11+f1g10+f2g9+f3g8+f4g7+f5g6+f6g5+f7g4+f8g3+f9g2+f10g1+f11g0+2*(f2g8+f4g6+f6g4+f8g2)+187*h11_187;

  int64_t h12_374 = f13g19+f15g17+f17g15+f19g13+carry11_374; // 2^54
  int64_t h12_187 = f14g18+f16g16+f18g14+h12_374<<1;// 2^57
  int64_t carry12_187 = h12_187>>26; h12_187 -= carry12_187 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h12 = f0g12+f3g9+f5g7+f7g5+f9g3+f12g0+2*(f1g11+f2g10+f4g8+f6g6+f8g4+f10g2+f11g1)+187*h12_187;

  int64_t h13_187 = f14g19+f15g18+f16g17+f17g16+f18g15+f19g14+carry12_187;// 2^57
  int64_t carry13_374 = h13_187>>26; h13_187 -= carry13_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h13 = f0g13+f1g12+f3g10+f4g9+f5g8+f6g7+f7g6+f8g5+f9g4+f10g3+f12g1+f13g0+2*(f2g11+f11g2)+187*h13_187;

  int64_t h14_374 = f15g19+f17g17+f19g15+carry13_374; // 2^54
  int64_t h14_187 = f16g18+f18g16+h14_374<<1;// 2^57
  int64_t carry14_187 = h14_187>>26; h14_187 -= carry14_187 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h14 = f0g14+f5g9+f7g7+f9g5+f14g0+2*(f1g13+f2g12+f3g11+f4g10+f6g8+f8g6+f10g4+f11g3+f12g2+f13g1)+187*h14_187;

  int64_t h15_187 = f16g19+f17g18+f18g17+f19g16+carry14_187;// 2^57
  int64_t carry15_374 = h15_187>>26; h15_187 -= carry15_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h15 = f0g15+f1g14+f3g12+f5g10+f6g9+f7g8+f8g7+f9g6+f10g5+f12g3+f14g1+f15g0+2*(f2g13+f4g11+f11g4+f13g2)+187*h15_187;

  int64_t h16_374 = f17g19+f19g17+carry15_374; // 2^54
  int64_t h16_187 = f18g18+h14_374<<1;// 2^57
  int64_t carry16_374 = h16_187>>26; h16_187 -= carry16_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h16 = f0g16+f7g9+f9g7+f16g0+2*(f1g15+f2g14+f3g13+f4g12+f5g11+f6g10+f8g8+f10g6+f11g5+f12g4+f13g3+f14g2+f15g1)+187*h16_187;

  int64_t h17_187 = f18g19+f19g18+carry16_374<<1;// 2^57
  int64_t carry17_374 = h14_187>>26; h14_187 -= carry17_374 << 26; // carry7 < 2^32, h187 < 2^26
  int64_t h17 = f0g17+f1g16+f3g14+f5g12+f7g10+f8g9+f9g8+f10g7+f12g5+f14g3+f16g1+f17g0+2*(f2g15+f4g13+f6g11+f11g6+f13g4+f15g2)+187*h17_187;

  int64_t h18_374 = f19g19+carry17_374; // 2^54
  int64_t h18 = f0g18+f9g9+f18g0+2*(f1g17+f2g16+f3g15+f4g14+f5g13+f6g12+f7g11+f8g10+f10g8+f11g7+f12g6+f13g5+f14g4+f15g3+f16g2+f17g1)+374*h18_374;
  int64_t carry18 = (h18 + (int64_t) (1<<24)) >> 25; h18 -= carry18 << 25;

  int64_t h19 = f0g19+f1g18+f3g16+f5g14+f7g12+f9g10+f10g9+f12g7+f14g5+f16g3+f18g1+f19g0+2*(f2g17+f4g15+f6g13+f8g11+f11g8+f13g6+f15g4+f17g2);
  int64_t carry19 = (h19 + (int64_t) (1<<24)) >> 25; h0 += carry19*187; h19 -= carry19 << 25;

  //reduce
  int64_t carry0 = (h0 + (int64_t) (1<<25)) >> 26; h1 += carry0; h0 -= carry0 << 26;
  int64_t carry1 = (h1 + (int64_t) (1<<25)) >> 26; h2 += carry1; h1 -= carry1 << 26;
  int64_t carry2 = (h2 + (int64_t) (1<<24)) >> 25; h3 += carry2; h2 -= carry2 << 25;
  int64_t carry3 = (h3 + (int64_t) (1<<25)) >> 26; h4 += carry3; h4 -= carry3 << 26;
  int64_t carry4 = (h4 + (int64_t) (1<<24)) >> 25; h5 += carry4; h4 -= carry4 << 25;
  int64_t carry5 = (h5 + (int64_t) (1<<25)) >> 26; h6 += carry5; h5 -= carry5 << 26;
  int64_t carry6 = (h6 + (int64_t) (1<<24)) >> 25; h7 += carry6; h6 -= carry6 << 25;
  int64_t carry7 = (h7 + (int64_t) (1<<25)) >> 26; h8 += carry7; h7 -= carry7 << 26;
  int64_t carry8 = (h8 + (int64_t) (1<<24)) >> 25; h9 += carry8; h8 -= carry8 << 25;
  int64_t carry9 = (h9 + (int64_t) (1<<25)) >> 26; h10 += carry9; h9 -= carry9 << 26;
  int64_t carry10 = (h10 + (int64_t) (1<<25)) >> 26; h11 += carry10; h10 -= carry10 << 26;
  int64_t carry11 = (h11 + (int64_t) (1<<24)) >> 25; h12 += carry11; h11 -= carry11 << 25;
  int64_t carry12 = (h12 + (int64_t) (1<<25)) >> 26; h13 += carry12; h12 -= carry12 << 26;
  int64_t carry13 = (h13 + (int64_t) (1<<24)) >> 25; h14 += carry13; h13 -= carry13 << 25;
  int64_t carry14 = (h14 + (int64_t) (1<<25)) >> 26; h15 += carry14; h14 -= carry14 << 26;
  int64_t carry15 = (h15 + (int64_t) (1<<24)) >> 25; h16 += carry15; h15 -= carry15 << 25;
  int64_t carry16 = (h16 + (int64_t) (1<<24)) >> 25; h17 += carry16; h16 -= carry16 << 25;
  int64_t carry17 = (h17 + (int64_t) (1<<24)) >> 25; h18 += carry17; h17 -= carry17 << 25;
  carry18 = (h18 + (int64_t) (1<<24)) >> 25; h19 += carry18; h18 -= carry18 << 25;
  carry19 = (h19 + (int64_t) (1<<24)) >> 25; h0 += carry19*187; h19 -= carry19 << 25;
  carry0 = (h0 + (int64_t) (1<<25)) >> 26; h1 += carry0; h0 -= carry0 << 26;
  carry1 = (h1 + (int64_t) (1<<25)) >> 26; h2 += carry1; h1 -= carry1 << 26;
  carry2 = (h2 + (int64_t) (1<<24)) >> 25; h3 += carry2; h2 -= carry2 << 25;

  Fe r;
  r.t[1] = h1;
  r.t[2] = h2;
  r.t[3] = h3;
  r.t[4] = h4;
  r.t[5] = h5;
  r.t[6] = h6;
  r.t[7] = h7;
  r.t[8] = h8;
  r.t[9] = h9;
  r.t[10] = h10;
  r.t[11] = h11;
  r.t[12] = h12;
  r.t[13] = h13;
  r.t[14] = h15;
  r.t[15] = h15;
  r.t[16] = h16;
  r.t[17] = h17;
  r.t[18] = h18;
  r.t[19] = h19;

  return r;
}

#endif //FE_CONST_HPP
