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

void test_op_assignment() {
  float lhs = 2.0f;
  float rhs = 5.0f;
  vec1f vec1_def_assign_vec1(lhs);
  vec1f vec1_def_assign_scalar(lhs);
  vec1f vec1_add_assign_vec1(lhs);
  vec1f vec1_add_assign_scalar(lhs);
  vec1f vec1_sub_assign_vec1(lhs);
  vec1f vec1_sub_assign_scalar(lhs);
  vec1f vec1_mul_assign_vec1(lhs);
  vec1f vec1_mul_assign_scalar(lhs);
  vec1f vec1_div_assign_vec1(lhs);
  vec1f vec1_div_assign_scalar(lhs);

  title("OP Assignment Tests");
  test((vec1_def_assign_vec1    = vec1f(rhs)).x == rhs,         "OP  =", {"vec<1,T>"});
  test((vec1_def_assign_scalar  = rhs       ).x == rhs,         "OP  =", {"T"});
  test((vec1_add_assign_vec1   += vec1f(rhs)).x == (lhs + rhs), "OP +=", {"vec<1,T>"});
  test((vec1_add_assign_scalar += rhs       ).x == (lhs + rhs), "OP +=", {"T"});
  test((vec1_sub_assign_vec1   -= vec1f(rhs)).x == (lhs - rhs), "OP -=", {"vec<1,T>"});
  test((vec1_sub_assign_scalar -= rhs       ).x == (lhs - rhs), "OP -=", {"T"});
  test((vec1_mul_assign_vec1   *= vec1f(rhs)).x == (lhs * rhs), "OP *=", {"vec<1,T>"});
  test((vec1_mul_assign_scalar *= rhs       ).x == (lhs * rhs), "OP *=", {"T"});
  test((vec1_div_assign_vec1   /= vec1f(rhs)).x == (lhs / rhs), "OP /=", {"vec<1,T>"});
  test((vec1_div_assign_scalar /= rhs       ).x == (lhs / rhs), "OP /=", {"T"});
}

void test_op_arithmetic() {
  // TODO: implement, duh
  title("OP Arithmetic Tests");
  add_failed_test();
}

void test_op_logical() {
  // TODO: implement, duh
  title("OP Logical Tests");
  add_failed_test();
}

void test_op_comparison() {
  // TODO: implement, duh
  title("OP Comparison Tests");
  add_failed_test();
}

int main(int argc, char* argv[]) {
  if (argc == 1) {
    title("Specify a test ID from 'helper.hpp'");
    return -1;
  }

  switch (get_test_id(argv[1])) {
    case TEST_ID::CONSTRUCTOR:
      test_constructors();
      break;
    case TEST_ID::OP_ASSIGNMENT:
      test_op_assignment();
      break;
    case TEST_ID::OP_ARITHMETIC:
      test_op_arithmetic();
      break;
    case TEST_ID::OP_LOGICAL:
      test_op_logical();
      break;
    case TEST_ID::OP_COMPARISON:
      test_op_comparison();
      break;
    default:
      title("Invalid test ID used");
      return -1;
  }

  return fail_counter;
}