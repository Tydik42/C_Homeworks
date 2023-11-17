#include "unity.h"
#include "solution.h"


void test_insertionSort(void)
{
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], 1);
    TEST_ASSERT_EQUAL_INT(arr[1], 2);
    TEST_ASSERT_EQUAL_INT(arr[2], 3);
    TEST_ASSERT_EQUAL_INT(arr[3], 4);
    TEST_ASSERT_EQUAL_INT(arr[4], 5);
    TEST_ASSERT_EQUAL_INT(arr[5], 6);
}

void test_insertionSort_with_negative_numbers(void)
{
    int arr[] = { -5, -2, -4, -6, -1, -3 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], -6);
    TEST_ASSERT_EQUAL_INT(arr[1], -5);
    TEST_ASSERT_EQUAL_INT(arr[2], -4);
    TEST_ASSERT_EQUAL_INT(arr[3], -3);
    TEST_ASSERT_EQUAL_INT(arr[4], -2);
    TEST_ASSERT_EQUAL_INT(arr[5], -1);
}

void test_insertionSort_with_duplicates(void)
{
    int arr[] = { 5, 2, 4, 6, 1, 3, 2, 4, 5 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], 1);
    TEST_ASSERT_EQUAL_INT(arr[1], 2);
    TEST_ASSERT_EQUAL_INT(arr[2], 2);
    TEST_ASSERT_EQUAL_INT(arr[3], 3);
    TEST_ASSERT_EQUAL_INT(arr[4], 4);
    TEST_ASSERT_EQUAL_INT(arr[5], 4);
    TEST_ASSERT_EQUAL_INT(arr[6], 5);
    TEST_ASSERT_EQUAL_INT(arr[7], 5);
    TEST_ASSERT_EQUAL_INT(arr[8], 6);
}

void test_insertionSort_with_single_element(void)
{
    int arr[] = { 42 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], 42);
}

void test_insertionSort_with_empty_array(void)
{
    int arr[10] = {};
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);
    TEST_ASSERT_EQUAL_INT(1, isSorted(arr, n));
}

void test_insertionSort_with_already_sorted_array(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], 1);
    TEST_ASSERT_EQUAL_INT(arr[1], 2);
    TEST_ASSERT_EQUAL_INT(arr[2], 3);
    TEST_ASSERT_EQUAL_INT(arr[3], 4);
    TEST_ASSERT_EQUAL_INT(arr[4], 5);
    TEST_ASSERT_EQUAL_INT(arr[5], 6);
}

void test_insertionSort_with_reverse_sorted_array(void)
{
    int arr[] = { 6, 5, 4, 3, 2, 1 };
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 0, n);

    TEST_ASSERT_EQUAL_INT(arr[0], 1);
    TEST_ASSERT_EQUAL_INT(arr[1], 2);
    TEST_ASSERT_EQUAL_INT(arr[2], 3);
    TEST_ASSERT_EQUAL_INT(arr[3], 4);
    TEST_ASSERT_EQUAL_INT(arr[4], 5);
    TEST_ASSERT_EQUAL_INT(arr[5], 6);
}

void test_insertionSort_with_big_number_of_elements(void)
{
    int* arr = (int*)calloc(1000, sizeof(int));
    const size_t n = sizeof(arr) / sizeof(arr[0]);

    generateRandomArray(arr, n);
    insertionSort(arr, 0, n);
    TEST_ASSERT_TRUE(isSorted(arr, n));
    free(arr);
}

void test_smartQSort_sorts_array_in_ascending_order(void)
{
    int array[] = { 5, 4, 3, 2, 1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_in_descending_order(void)
{
    int array[] = { 1, 2, 3, 4, 5 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_with_duplicates(void)
{
    int array[] = { 5, 4, 3, 3, 2, 1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_with_negative_numbers(void)
{
    int array[] = { -5, -4, -3, -2, -1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);

    for (size_t i = 0; i < arrayLength - 1; ++i)
    {
        TEST_ASSERT_TRUE(array[i] <= array[i + 1]);
    }
}

void test_smartQSort_sorts_array_with_single_element(void)
{
    int array[] = { 1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);

    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}


void test_smartQSort_sorts_array_with_ten_elements(void)
{
    int array[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_with_odd_number_of_elements(void)
{
    int array[] = { 5, 4, 3, 2, 1, 0 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_with_even_number_of_elements(void)
{
    int array[] = { 6, 5, 4, 3, 2, 1 };
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
}

void test_smartQSort_sorts_array_with_big_number_of_elements(void)
{
    int* array = (int*)calloc(1000, sizeof(int));
    const size_t arrayLength = sizeof(array) / sizeof(array[0]);

    generateRandomArray(array, arrayLength);
    smartQSort(array, 0, arrayLength);
    TEST_ASSERT_TRUE(isSorted(array, arrayLength));
    free(array);
}

void test_binary_search(void) {
    int array1[] = {1, 2, 3, 4, 5};
    TEST_ASSERT(binarySearch(array1, 3, 5) == 1);
    TEST_ASSERT(binarySearch(array1, 6, 5) == 0);

    int array2[] = {-10, -5, 0, 5, 10};
    TEST_ASSERT(binarySearch(array2, -5, 5) == 1);
    TEST_ASSERT(binarySearch(array2, 15, 5) == 0);

    int array3[] = {100, 200, 300, 400, 500};
    TEST_ASSERT(binarySearch(array3, 300, 5) == 1);
    TEST_ASSERT(binarySearch(array3, 600, 5) == 0);
}

void test_binary_search_with_empty_array(void) {
    int array[] = {};
    TEST_ASSERT(binarySearch(array, 1, 0) == 0);
}

void test_binary_search_with_single_element(void) {
    int array[] = {42};
    TEST_ASSERT(binarySearch(array, 42, 1) == 1);
    TEST_ASSERT(binarySearch(array, 1, 1) == 0);
}

void test_binary_search_with_duplicates(void) {
    int array[] = {1, 2, 2, 3, 4, 5};
    TEST_ASSERT(binarySearch(array, 2, 6) == 1);
    TEST_ASSERT(binarySearch(array, 6, 6) == 0);
}

void test_binary_search_with_negative_numbers(void) {
    int array[] = {-5, -4, -3, -2, -1};
    TEST_ASSERT(binarySearch(array, -3, 5) == 1);
    TEST_ASSERT(binarySearch(array, 0, 5) == 0);
}