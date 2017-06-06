#ifndef TEST_SCALAR_HPP_
#define TEST_SCALAR_HPP_
#include "scalar.hpp"
#include <random>

void test_scalar_equal(){
  std::cout << "test_scalar_equal... ";
  Scalar a, b, c;
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

void test_scalar_notequal(){
  std::cout << "test_scalar_notequal... ";
  std::random_device generator;
  std::uniform_int_distribution<char> distribution;
  unsigned char tmp[64];

  Scalar a, b;
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

void test_scalar_invert(){
  std::cout << "test_scalar_invert... ";
  Scalar a, b;
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

void test_scalar_add_commutativity(){
  std::cout << "test_scalar_add_commutativity... ";
  Scalar a, b, c1, c2;
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

void test_scalar_add_associativity(){
  std::cout << "test_scalar_add_associativity... ";
  Scalar a, b, c, ab, bc, abc, bca;
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

void test_scalar_mul_commutativity(){
  std::cout << "test_scalar_mul_commutativity... ";
  Scalar a, b, ab, ba;
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

void test_scalar_mul_associativity(){
  std::cout << "test_scalar_mul_associativity... ";
  Scalar a, b, c, ab, bc, abc, bca;
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

void test_scalar_distributivity(){
  std::cout << "test_scalar_distributivity... ";
  //a*(b+c) = ab+ac;
  Scalar a, b, c, abc, abac;
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




#endif //TEST_SCALAR_HPP
