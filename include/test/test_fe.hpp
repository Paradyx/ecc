#ifndef TEST_FE_HPP_
#define TEST_FE_HPP_
#include "fe.hpp"
#include <random>

void test_fe_equal(){
  std::cout << "test_fe_equal... ";
  Fe a, b, c;
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;
  unsigned char tmp[64];

  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  a.frombytes(tmp);
  b.frombytes(tmp);

  if (a == b) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}

void test_fe_notequal(){
  std::cout << "test_fe_notequal... ";
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;
  unsigned char tmp[64];

  Fe a, b;
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  a.frombytes(tmp);
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  b.frombytes(tmp);

  if (a == b) {
    std::cout << "FAILED: a and b should be not equal" << std::endl;
  }else{
    std::cout << "PASSED" << std::endl;
  }
}

void test_fe_to1(){
  std::cout << "test_fe_to1... ";
  Fe a, b;
  a.to1();
  b.fromint(1);
  if (a == b) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}

void test_fe_to0(){
  std::cout << "test_fe_to0... ";
  Fe a, b;
  a.to0();
  b.fromint(0);
  if (a == b) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}
void test_fe_invert(){
  std::cout << "test_fe_invert... ";
  Fe a, b;
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;
  unsigned char tmp[64];
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }

  a.frombytes(tmp);
  b.frombytes(tmp);

  invert(a);
  invert(a);

  if (a == b) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}

void test_fe_add_commutativity(){
  std::cout << "test_fe_add_commutativity... ";
  Fe a, b, c1, c2;
  std::random_device generator;
  unsigned char tmp[64];
  std::uniform_int_distribution<char> distribution;
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }

  a.frombytes(tmp);
  b.frombytes(tmp);

  c1 = a+b;
  c2 = b+a;

  if (a == b) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a and b should be equal" << std::endl;
  }
}

void test_fe_add_associativity(){
  std::cout << "test_fe_add_associativity... ";
  Fe a, b, c, ab, bc, abc, bca;
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
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  c.frombytes(tmp);
  ab = a+b;
  bc = b+c;
  abc = ab+c;
  bca = bc+a;

  if (abc == bca) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: (a+b)+c and (b+c)+a should be equal" << std::endl;
  }
}

void test_fe_cswap(){
  std::cout << "test_fe_cswap... ";
  Fe a1, a2, b1, b2;
  std::random_device generator;
  unsigned char tmp[64];
  std::uniform_int_distribution<char> distribution;
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  a1.frombytes(tmp);
  a2.frombytes(tmp);
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  b1.frombytes(tmp);
  b2.frombytes(tmp);

  cswap(a1, b1, false);
  bool passed = true;
  if (a1 == a2) {
  }else{
    std::cout << "FAILED: a1 and a2 should be equal" << std::endl;
    passed = false;
  }
  if (b1 == b2) {
  }else{
    std::cout << "FAILED: b1 and b2 should be equal" << std::endl;
    passed = false;
  }

  cswap(a1, b1, true);
  if (a1 == b2) {
  }else{
    std::cout << "FAILED: a1 and b2 should be equal" << std::endl;
    passed = false;
  }
  if (b1 == a2) {
  }else{
    std::cout << "FAILED: b1 and a2 should be equal" << std::endl;
    passed = false;
  }

  if (passed) std::cout << "PASSED" << std::endl;
}

void test_fe_mul_commutativity(){
  std::cout << "test_fe_mul_commutativity... ";
  Fe a, b, ab, ba;
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

  ab = a*b;
  ba = b*a;

  if (ab == ba) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a*b and b*a should be equal" << std::endl;
  }
}

void test_fe_mul_associativity(){
  std::cout << "test_fe_mul_associativity... ";
  Fe a, b, c, ab, bc, abc, bca;
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
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  c.frombytes(tmp);
  ab = a*b;
  bc = b*c;
  abc = ab*c;
  bca = bc*a;

  if (abc == bca) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: (a*b)*c and (b*c)*a should be equal" << std::endl;
  }
}

void test_fe_distributivity(){
  std::cout << "test_fe_distributivity... ";
  //a*(b+c) = ab+ac;
  Fe a, b, c, abc, abac;
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
  for (unsigned int i = 0; i < sizeof(tmp); ++i) {
    tmp[i] = distribution(generator);
  }
  c.frombytes(tmp);
  abc = a*(b+c);
  abac = a*b+a*c;

  if (abc == abac) {
    std::cout << "PASSED" << std::endl;
  }else{
    std::cout << "FAILED: a*(b+c) = ab+ac should be equal" << std::endl;
  }
}




#endif //TEST_FE_HPP
