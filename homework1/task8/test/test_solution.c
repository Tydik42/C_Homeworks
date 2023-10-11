#include "unity.h"
#include "solution.h"

void test_swap1(void) {
    int arr[] = {1, 2, 3};
    swap(arr, 0, 2);
    TEST_ASSERT_EQUAL(3, arr[0]);
    TEST_ASSERT_EQUAL(2, arr[1]);
    TEST_ASSERT_EQUAL(1, arr[2]);
}

void test_swap2(void) {
    int arr[] = {10, 20, 30, 40};
    swap(arr, 1, 3);
    TEST_ASSERT_EQUAL(10, arr[0]);
    TEST_ASSERT_EQUAL(40, arr[1]);
    TEST_ASSERT_EQUAL(30, arr[2]);
    TEST_ASSERT_EQUAL(20, arr[3]);
}


void test_swapArraySlice1(void) {
    int arr[] = {1, 2, 3, 4, 5};
    swapArraySlice(arr, 1, 4);
    TEST_ASSERT_EQUAL(1, arr[0]);
    TEST_ASSERT_EQUAL(4, arr[1]);
    TEST_ASSERT_EQUAL(3, arr[2]);
    TEST_ASSERT_EQUAL(2, arr[3]);
    TEST_ASSERT_EQUAL(5, arr[4]);
}

void test_swapArraySlice2(void) {
    int arr[] = {10, 20, 30, 40, 50, 60};
    swapArraySlice(arr, 2, 5);
    TEST_ASSERT_EQUAL(10, arr[0]);
    TEST_ASSERT_EQUAL(20, arr[1]);
    TEST_ASSERT_EQUAL(50, arr[2]);
    TEST_ASSERT_EQUAL(40, arr[3]);
    TEST_ASSERT_EQUAL(30, arr[4]);
    TEST_ASSERT_EQUAL(60, arr[5]);
}

void test_swapArraySlice3(void) {
    int arr[] = {10, 20, 30, 40, 50, 60};
    swapArraySlice(arr, 0, 6);
    TEST_ASSERT_EQUAL(60, arr[0]);
    TEST_ASSERT_EQUAL(50, arr[1]);
    TEST_ASSERT_EQUAL(40, arr[2]);
    TEST_ASSERT_EQUAL(30, arr[3]);
    TEST_ASSERT_EQUAL(20, arr[4]);
    TEST_ASSERT_EQUAL(10, arr[5]);
}

