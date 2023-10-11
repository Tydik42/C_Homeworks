#include "unity.h"
#include <stdbool.h>
#include "solution.h"

void test_sieveOfEratosthenes1(void) {
    bool arr[11] = {0};
    sieveOfEratosthenes(10, arr);
    TEST_ASSERT_EQUAL(true, arr[2]);
    TEST_ASSERT_EQUAL(true, arr[3]);
    TEST_ASSERT_EQUAL(true, arr[5]);
    TEST_ASSERT_EQUAL(true, arr[7]);
    TEST_ASSERT_EQUAL(false, arr[0]);
    TEST_ASSERT_EQUAL(false, arr[1]);
    TEST_ASSERT_EQUAL(false, arr[4]);
    TEST_ASSERT_EQUAL(false, arr[6]);
    TEST_ASSERT_EQUAL(false, arr[8]);
    TEST_ASSERT_EQUAL(false, arr[9]);
    TEST_ASSERT_EQUAL(false, arr[10]);
}