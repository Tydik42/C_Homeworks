#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_insertionSort(void)

{

    int arr[] = { 5, 2, 4, 6, 1, 3 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_negative_numbers(void)

{

    int arr[] = { -5, -2, -4, -6, -1, -3 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((-6)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((-5)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((-4)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((-3)), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((-2)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((-1)), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_duplicates(void)

{

    int arr[] = { 5, 2, 4, 6, 1, 3, 2, 4, 5 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[6])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[7])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[8])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_single_element(void)

{

    int arr[] = { 42 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((42)), (

   ((void *)0)

   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_empty_array(void)

{

    int arr[10] = {};

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((isSorted(arr, n))), (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_already_sorted_array(void)

{

    int arr[] = { 1, 2, 3, 4, 5, 6 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_reverse_sorted_array(void)

{

    int arr[] = { 6, 5, 4, 3, 2, 1 };

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    insertionSort(arr, 0, n);



    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(94), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);

}



void test_insertionSort_with_big_number_of_elements(void)

{

    int* arr = (int*)calloc(1000, sizeof(int));

    const size_t n = sizeof(arr) / sizeof(arr[0]);



    generateRandomArray(arr, n);

    insertionSort(arr, 0, n);

    do {if ((isSorted(arr, n))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(109)));}} while(0);

    free(arr);

}



void test_smartQSort_sorts_array_in_ascending_order(void)

{

    int array[] = { 5, 4, 3, 2, 1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(119)));}} while(0);

}



void test_smartQSort_sorts_array_in_descending_order(void)

{

    int array[] = { 1, 2, 3, 4, 5 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(128)));}} while(0);

}



void test_smartQSort_sorts_array_with_duplicates(void)

{

    int array[] = { 5, 4, 3, 3, 2, 1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(137)));}} while(0);

}



void test_smartQSort_sorts_array_with_negative_numbers(void)

{

    int array[] = { -5, -4, -3, -2, -1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);



    for (size_t i = 0; i < arrayLength - 1; ++i)

    {

        do {if ((array[i] <= array[i + 1])) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(149)));}} while(0);

    }

}



void test_smartQSort_sorts_array_with_single_element(void)

{

    int array[] = { 1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);



    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(160)));}} while(0);

}





void test_smartQSort_sorts_array_with_ten_elements(void)

{

    int array[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(170)));}} while(0);

}



void test_smartQSort_sorts_array_with_odd_number_of_elements(void)

{

    int array[] = { 5, 4, 3, 2, 1, 0 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(179)));}} while(0);

}



void test_smartQSort_sorts_array_with_even_number_of_elements(void)

{

    int array[] = { 6, 5, 4, 3, 2, 1 };

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(188)));}} while(0);

}



void test_smartQSort_sorts_array_with_big_number_of_elements(void)

{

    int* array = (int*)calloc(1000, sizeof(int));

    const size_t arrayLength = sizeof(array) / sizeof(array[0]);



    generateRandomArray(array, arrayLength);

    smartQSort(array, 0, arrayLength);

    do {if ((isSorted(array, arrayLength))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(198)));}} while(0);

    free(array);

}
