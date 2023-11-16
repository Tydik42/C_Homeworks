#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void test_halfQSort() {

    int arr1[] = {16, 14, 12, 12, 7, 15, 11, 17, 18, 17};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    halfQSort(arr1, len1);

    int expected1[] = {11, 14, 12, 12, 7, 15, 16, 17, 18, 17};

    UnityAssertEqualIntArray(( const void*)((expected1)), ( const void*)((arr1)), (UNITY_UINT32)((len1)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr2[] = {6, 11, 1, 2, 14, 12, 14, 12, 9, 16};

    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    halfQSort(arr2, len2);

    int expected2[] = {2, 1, 11, 6, 14, 12, 14, 12, 9, 16};

    UnityAssertEqualIntArray(( const void*)((expected2)), ( const void*)((arr2)), (UNITY_UINT32)((len2)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);



    int arr3[] = {6, 8, 19, 3, 17, 12, 17, 15, 14, 12};

    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    halfQSort(arr3, len3);

    int expected3[] = {3, 8, 19, 6, 17, 12, 17, 15, 14, 12};

    UnityAssertEqualIntArray(( const void*)((expected3)), ( const void*)((arr3)), (UNITY_UINT32)((len3)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
