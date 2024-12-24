#include "../rpn.h"
#include "unity/unity.h"

void setUp(void) {
}

void tearDown(void) {
}

const int values[] = {1, 2, 3};

void add(void) {
  TEST_ASSERT_EQUAL_INT(6, rpn(values, "+"));
}

void sub(void) {
  TEST_ASSERT_EQUAL_INT(0, rpn(values, "-"));
}

void mult(void) {
  TEST_ASSERT_EQUAL_INT(6, rpn(values, "*"));
}

void div(void) {
  TEST_ASSERT_EQUAL_INT(1, rpn(values, "/"));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(add);
  RUN_TEST(sub);
  RUN_TEST(mult);
  RUN_TEST(div);
  return UNITY_END();
}
