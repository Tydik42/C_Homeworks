#include "unity.h"

#include "solution.h"


void test_recursiveFibonacciCounter_with_negative_number(void) {
    TEST_ASSERT_EQUAL_INT(-1, recursiveFibonacciCounter(-1));
}

void test_recursiveFibonacciCounter_with_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, recursiveFibonacciCounter(0));
}

void test_recursiveFibonacciCounter_with_one(void) {
    TEST_ASSERT_EQUAL_INT(1, recursiveFibonacciCounter(1));
}

void test_recursiveFibonacciCounter_with_two(void) {
    TEST_ASSERT_EQUAL_INT(1, recursiveFibonacciCounter(2));
}

void test_recursiveFibonacciCounter_with_three(void) {
    TEST_ASSERT_EQUAL_INT(2, recursiveFibonacciCounter(3));
}

void test_recursiveFibonacciCounter_with_seven(void) {
    TEST_ASSERT_EQUAL_INT(13, recursiveFibonacciCounter(7));
}

void test_recursiveFibonacciCounter_with_large_number(void) {
    TEST_ASSERT_EQUAL_INT(1134903170, recursiveFibonacciCounter(45));
}



void test_iterativeFibonacciCounter_with_negative_number(void) {
    TEST_ASSERT_EQUAL_INT(-1, iterativeFibonacciCounter(-1));
}

void test_iterativeFibonacciCounter_with_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, iterativeFibonacciCounter(0));
}

void test_iterativeFibonacciCounter_with_one(void) {
    TEST_ASSERT_EQUAL_INT(1, iterativeFibonacciCounter(1));
}

void test_iterativeFibonacciCounter_with_two(void) {
    TEST_ASSERT_EQUAL_INT(1, iterativeFibonacciCounter(2));
}

void test_iterativeFibonacciCounter_with_three(void) {
    TEST_ASSERT_EQUAL_INT(2, iterativeFibonacciCounter(3));
}

void test_iterativeFibonacciCounter_with_seven(void) {
    TEST_ASSERT_EQUAL_INT(13, iterativeFibonacciCounter(7));
}

void test_iterativeFibonacciCounter_with_large_number(void) {
    TEST_ASSERT_EQUAL_INT(1134903170, iterativeFibonacciCounter(45));
}