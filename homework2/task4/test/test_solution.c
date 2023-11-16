#include "unity.h"

#include "solution.h"

void test_halfQSort() {
    int arr1[] = {16, 14, 12, 12, 7, 15, 11, 17, 18, 17};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    halfQSort(arr1, len1);
    int expected1[] = {11, 14, 12, 12, 7, 15, 16, 17, 18, 17};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected1, arr1, len1);

    int arr2[] = {6, 11, 1, 2, 14, 12, 14, 12, 9, 16};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    halfQSort(arr2, len2);
    int expected2[] = {2, 1, 11, 6, 14, 12, 14, 12, 9, 16};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected2, arr2, len2);

    int arr3[] = {6, 8, 19, 3, 17, 12, 17, 15, 14, 12};
    int len3 = sizeof(arr3) / sizeof(arr3[0]);
    halfQSort(arr3, len3);
    int expected3[] = {3, 8, 19, 6, 17, 12, 17, 15, 14, 12};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected3, arr3, len3);
}