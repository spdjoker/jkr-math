#include "helper.hpp"

void test_constructors() {
  int   key_basic       = 0;
  float key_scalar      = 3.0f;
  int   key_conversion  = key_scalar;
  int   key_copy        = key_conversion;
  vec1i vec1_basic;
  vec1f vec1_scalar(key_scalar);
  vec1i vec1_conversion(vec1_scalar);
  vec1i vec1_copy(vec1_conversion);

  title("Constructor Tests");
  test(vec1_basic.x == 0, "Default");
  test(vec1_copy.x == vec1_conversion.x, "Copy", {"vec<1,T>"});
  test(vec1_scalar.x == 3.0f, "Scalar", {"T"});
  test(vec1_conversion.x == 3, "Conversion", {"vec<1,U>"});
}

int main(int argc, char* argv[]) {
  test_constructors();
  title(std::to_string(total_tests - fail_counter) + '/' + std::to_string(total_tests));
  return fail_counter;
}