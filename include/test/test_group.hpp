#ifndef TEST_GROUP_HPP_
#define TEST_GROUP_HPP_
#include "point.hpp"
#include "scalar.hpp"
#include "param.hpp"
#include <random>

void test_group_0(){
  std::cout << "test_group_0... ";

  unsigned char tmp[64];
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = 0;
  }

  Scalar scalar_z;
  scalar_z.frombytes(tmp);

  Point g, r;
  g.frombytes(M511.gx, M511.gy);

  scalarmult(r, scalar_z, g);

  Fe fe_zero, fe_one;
  fe_zero.to0();
  fe_one.to1();

  bool passed = true;
  if (r.x == fe_zero) {
  }else{
    std::cout << "FAILED: point_x should be zero" << std::endl;
    passed = false;
  }

  if (r.y == fe_one) {
  }else{
    std::cout << "FAILED: point_y should be one" << std::endl;
    passed = false;
  }

  if (r.z == fe_zero) {
  }else{
    std::cout << "FAILED: point_z should be zero" << std::endl;
    passed = false;
  }

  if (passed) std::cout << "PASSED" << std::endl;
}

void test_group_add0(){
  std::cout << "test_group_add0... ";
  Point a, b, c ;
  a.x.to0();
  a.y.to1();
  a.z.to0();
  b.x.to0();
  b.y.to1();
  b.z.to0();
  c = a+b;
  if (equal(c,a)) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: O+O!=0" << std::endl;
  }
}

void test_group_n(){
  std::cout << "test_group_n... ";
  Scalar n;
  n.frombytes(M511.l);
  Point r, g;
  g.frombytes(M511.gx, M511.gy);

  Fe fe_zero, fe_one;
  fe_zero.to0();
  fe_one.to1();

  scalarmult(r, n, g);

  bool passed = true;
  if (r.x == fe_zero) {
  }else{
    std::cout << "FAILED: point_x should be zero" << std::endl;
    passed = false;
  }

  if (r.y == fe_one) {
  }else{
    std::cout << "FAILED: point_y should be one" << std::endl;
    passed = false;
  }

  if (r.z == fe_zero) {
  }else{
    std::cout << "FAILED: point_z should be zero" << std::endl;
    passed = false;
  }
  r.print();
  if (passed) std::cout << "PASSED" << std::endl;
}

void test_group_add_commutativity(){
  std::cout << "test_group_add_commutativity... ";
  Point a, b, c1, c2, g;
  Scalar sa, sb;
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;
  unsigned char tmp[64];

  g.frombytes(M511.gx, M511.gy);

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  sa.frombytes(tmp);
  scalarmult(a, sa, g);

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  sa.frombytes(tmp);
  scalarmult(b, sb, g);

  c1 = a+b;
  c2 = b+a;

  if (equal(a,b)) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}

void test_group_add_associativity(){
  std::cout << "test_group_add_associativity... ";
  Point a, b, c, ab, bc, abc, bca, g;
  g.frombytes(M511.gx, M511.gy);
  Scalar sa, sb, sc;
  std::random_device generator;
  unsigned char tmp[64];
  std::uniform_int_distribution<char> distribution;

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  sa.frombytes(tmp);
  scalarmult(a, sa, g);

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  sa.frombytes(tmp);
  scalarmult(b, sb, g);

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  sc.frombytes(tmp);
  scalarmult(c, sc, g);

  ab = a+b;
  bc = b+c;
  abc = ab+c;
  bca = bc+a;

  if (equal(a, b)) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: (a+b)+c and (b+c)+a should be equal" << std::endl;
  }
}

void test_group_distributivity(){
  // (a+b)*c = ac+bc;
  std::cout << "test_group_distributivity... ";
  Scalar a, b, ab;
  Point c, ac, bc, abc, acbc, g;
  g.frombytes(M511.gx, M511.gy);
  Scalar sc;
  std::random_device generator;
  unsigned char tmp[64];
  std::uniform_int_distribution<char> distribution;

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  a.frombytes(tmp);

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  b.frombytes(tmp);

  sc.frombytes(tmp);
  scalarmult(c, sc, g);

  ab = a+b;
  scalarmult(abc, ab, c);

  scalarmult(ac, a, c);
  scalarmult(bc, b, c);
  acbc = ac+bc;

  ac.print();
  acbc.print();
  if (equal(abc, acbc)) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: (a+b)*c and ac+bc should be equal" << std::endl;
  }

}



void test_scalarmult(){
  std::cout << "test_scalarmult... ";
  Point a, b, c, ab, bc, abc, bca, g;
  g.frombytes(M511.gx, M511.gy);
  Scalar sa, sb, sc;
  std::random_device generator;
  unsigned char tmp[64];
  std::uniform_int_distribution<char> distribution;

}

#endif //TEST_GROUP_HPP
