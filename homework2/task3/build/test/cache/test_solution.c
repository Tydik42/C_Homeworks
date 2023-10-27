#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_bubbleSort() {

    int arr1[] = {5, 2, 8, 4, 9, 1, 3, 7, 6};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    bubbleSort(arr1, len1);

    int expected1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    UnityAssertEqualIntArray(( const void*)((expected1)), ( const void*)((arr1)), (UNITY_UINT32)((len1)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr2[] = {1, 2, 3, 4, 5};

    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    bubbleSort(arr2, len2);

    int expected2[] = {1, 2, 3, 4, 5};

    UnityAssertEqualIntArray(( const void*)((expected2)), ( const void*)((arr2)), (UNITY_UINT32)((len2)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr3[] = {5, 4, 3, 2, 1};

    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    bubbleSort(arr3, len3);

    int expected3[] = {1, 2, 3, 4, 5};

    UnityAssertEqualIntArray(( const void*)((expected3)), ( const void*)((arr3)), (UNITY_UINT32)((len3)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_countingSort() {

    int arr1[] = {5, 2, 8, 4, 9, 1, 3, 7, 6};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    countingSort(arr1, len1);

    int expected1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    UnityAssertEqualIntArray(( const void*)((expected1)), ( const void*)((arr1)), (UNITY_UINT32)((len1)), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr2[] = {1, 2, 3, 4, 5};

    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    countingSort(arr2, len2);

    int expected2[] = {1, 2, 3, 4, 5};

    UnityAssertEqualIntArray(( const void*)((expected2)), ( const void*)((arr2)), (UNITY_UINT32)((len2)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr3[] = {5, 4, 3, 2, 1};

    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    countingSort(arr3, len3);

    int expected3[] = {1, 2, 3, 4, 5};

    UnityAssertEqualIntArray(( const void*)((expected3)), ( const void*)((arr3)), (UNITY_UINT32)((len3)), (

   ((void *)0)

   ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
