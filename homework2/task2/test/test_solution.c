#include "unity.h"

#include "solution.h"


void test_linPow() {
    TEST_ASSERT_EQUAL(1, linPow(1, 1));
    TEST_ASSERT_EQUAL(1, linPow(1, 10));
    TEST_ASSERT_EQUAL(-1, linPow(-1, 10));
    TEST_ASSERT_EQUAL(-1, linPow(2, -1));
    TEST_ASSERT_EQUAL(1, linPow(2, 0));
    TEST_ASSERT_EQUAL(8, linPow(2, 3));
    TEST_ASSERT_EQUAL(16, linPow(2, 4));
    TEST_ASSERT_EQUAL(1, linPow(10, 0));
    TEST_ASSERT_EQUAL(1000, linPow(10, 3));
    TEST_ASSERT_EQUAL(81, linPow(3, 4));
    TEST_ASSERT_EQUAL(3125, linPow(5, 5));
    
}

void test_binPow() {
    TEST_ASSERT_EQUAL(1, binPow(1, 1));
    TEST_ASSERT_EQUAL(1, binPow(1, 10));
    TEST_ASSERT_EQUAL(-1, binPow(-1, 10));
    TEST_ASSERT_EQUAL(-1, binPow(2, -1));
    TEST_ASSERT_EQUAL(1, binPow(2, 0));
    TEST_ASSERT_EQUAL(8, binPow(2, 3));
    TEST_ASSERT_EQUAL(16, binPow(2, 4));
    TEST_ASSERT_EQUAL(1, binPow(10, 0));
    TEST_ASSERT_EQUAL(1000, binPow(10, 3));
    TEST_ASSERT_EQUAL(81, binPow(3, 4));
    TEST_ASSERT_EQUAL(3125, binPow(5, 5));
    
}