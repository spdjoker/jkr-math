#ifndef JKR_TEST_HELPER
#define JKR_TEST_HELPER

#define ENABLE_SWIZZLE

#include "jkr/common.hpp"

#include <iostream>
#include <iomanip>
#include <cassert>
#include <vector>
#include <string>

using namespace jkr;

template <typename T>
using vector = std::vector<T>;
using string = std::string;

int fail_counter = 0;
int total_tests = 0;

void title(std::string const& title) {
  std::cout << "============= " << std::left << std::setw(32) << std::setfill('=') << (title + ' ') << '\n' << std::setfill(' ');
}

bool test(bool value, std::string const& label = "NOT LABELED", vector<const char*> params = {}) {
  if (value) {
    std::cout << "[ PASSED ]";
  } else {
    fail_counter++;
    std::cout << "[ ------ ]";
  }
  std::cout << "    " << std::left << std::setw(32) << label << '(';
  for (int i = 0; i < params.size(); i++) {
    std::cout << ' ' << params[i];
    if (i + 1 != params.size())
      std::cout << ',';
  }
  std::cout << " )\n";

  total_tests++;
  return value;
}

void test_summary() {
  title(std::to_string(total_tests - fail_counter) + '/' + std::to_string(total_tests));
}

enum class TEST_ID : int {
  INVALID = 0,
  CONSTRUCTOR = 1,
  OP_ASSIGNMENT = 2,
  OP_ARITHMETIC = 3,
  OP_LOGICAL = 4,
  OP_COMPARISON = 5,
  OP_INCREMENT = 6,
  FN_MEMBERS = 7
};

TEST_ID get_test_id(const char* str) {
  return (TEST_ID)std::atoi(str);
}

void add_failed_test() {
  fail_counter++;
}

#endif // JKR_TEST_HELPER