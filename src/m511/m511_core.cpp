#include "m511/m511_core.hpp"
#include "m511/finitefieldelement.hpp"

static FiniteFieldElement m511_add(FiniteFieldElement a, FiniteFieldElement b){

}

static FiniteFieldElement m511_double(FiniteFieldElement x1, FiniteFieldElement z1, FiniteFieldElement x3, FiniteFieldElement z3){
  //X3 = (X1+Z1)^2*(X1-Z1)^2
  //Z3 = (4*X1*Z1)*((X1-Z1)2+a24*(4*X1*Z1))
  FiniteFieldElement x1pz1;
  FiniteFieldElement x1mz1;
  FiniteFieldElement x1z14;
  FiniteFieldElement a24;
  a24 = 132610;
  x1pz1 = x1+z1;
  x1mz1 = x1-z1;
  x1z14 = x1*z1;
  x1z14 *= 4;
  x3 = 1;
  x3 *= x1pz1;
  x3 *= x1pz1;
  x3 *= x1mz1;
  x3 *= x1mz1;
  a24 *= x1z14;
  z3 = 1;
  z3 *= x1mz1;
  z3 *= x1mz1;
  z3 += a24;
  z3 *= x1z14;

}

static FiniteFieldElement m511_scalarmult(FiniteFieldElement n, FiniteFieldElement p){

}
