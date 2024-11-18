#define ENABLE_SWIZZLE

#include "jkr/common.hpp"

#include <iostream>
#include <cassert>

using namespace jkr;

int fail_counter = 0;
int total_tests = 0;

bool test(bool value, std::string const& expression) {
  if (value) {
    std::cout << "[ PASSED ]\t";
  } else {
    fail_counter++;
    std::cout << "[ ------ ]\t";
  }
  std::cout << expression << '\n';
  total_tests++;
  return value;
}

int main(int argc, char* argv[]) {
  vec3 v1(9.0f);
  vec3 v2(0);
  vec1f dummy;
  dummy.x = 1;

  // Test 'res' has been initialized correctly.
  test(v1.x == 9.0f && v1.y == 9.0f && v1.z == 9.0f, "v1 was initialized to proper values.");
  test(v1.x == v1.r && v1.y == v1.g && v1.z == v1.b, "v1's xyz and rgb share memory.");
  // Test 'key' has been initialized correctly.
  test(v2.x == 0.0f && v2.y == 0.0f && v2.z == 0.0f, "v2 was initialized to proper values.");
  test(v2.x == v2.r && v2.y == v2.g && v2.z == v2.b, "v2's xyz and rgb share memory.");
  // Addition
  test(v2 + vec3(9.0f, 9.0f, 9.0f) == v1, 	" vec3 + vec3");
  test(9.0f + v2 == v1, 										"float + vec3");
  test(9 + v2 == v1, 											  "  int + vec3");
  test(v2 + 9.0f == v1, 										" vec3 + float");
  test(v2 + 9 == v1, 											  " vec3 + int");
  // Subtraction
  test(v1 - vec3(9.0f, 9.0f, 9.0f) == v2, 	" vec3 - vec3");
  test(9.0f - v1 == v2, 										"float - vec3");
  test(9 - v1 == v2, 											  "  int - vec3");
  test(v1 - 9.0f == v2, 										" vec3 - float");
  test(v1 - 9 == v2, 											  " vec3 - int");

  std::cout << (total_tests - fail_counter) << '/' << total_tests;

  return fail_counter;
}