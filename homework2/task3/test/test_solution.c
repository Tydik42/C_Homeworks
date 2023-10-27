#include "unity.h"

#include "solution.h"

void test_bubbleSort() {
    int arr1[] = {5, 2, 8, 4, 9, 1, 3, 7, 6};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, len1);
    int expected1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected1, arr1, len1);

    int arr2[] = {1, 2, 3, 4, 5};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, len2);
    int expected2[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected2, arr2, len2);

    int arr3[] = {5, 4, 3, 2, 1};
    int len3 = sizeof(arr3) / sizeof(arr3[0]);
    bubbleSort(arr3, len3);
    int expected3[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected3, arr3, len3);
}

void test_countingSort() {
    int arr1[] = {5, 2, 8, 4, 9, 1, 3, 7, 6};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    countingSort(arr1, len1);
    int expected1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected1, arr1, len1);

    int arr2[] = {1, 2, 3, 4, 5};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    countingSort(arr2, len2);
    int expected2[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected2, arr2, len2);

    int arr3[] = {5, 4, 3, 2, 1};
    int len3 = sizeof(arr3) / sizeof(arr3[0]);
    countingSort(arr3, len3);
    int expected3[] = {1, 2, 3, 4, 5};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected3, arr3, len3);
}