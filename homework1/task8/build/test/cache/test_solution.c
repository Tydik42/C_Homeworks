#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_swap1(void) {

    int arr[] = {1, 2, 3};

    swap(arr, 0, 2);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(7), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

}



void test_swap2(void) {

    int arr[] = {10, 20, 30, 40};

    swap(arr, 1, 3);

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((40)), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((arr[3])), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}





void test_swapArraySlice1(void) {

    int arr[] = {1, 2, 3, 4, 5};

    swapArraySlice(arr, 1, 4);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((arr[3])), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((arr[4])), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}



void test_swapArraySlice2(void) {

    int arr[] = {10, 20, 30, 40, 50, 60};

    swapArraySlice(arr, 2, 5);

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((50)), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((40)), (UNITY_INT)((arr[3])), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((arr[4])), (

   ((void *)0)

   ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((60)), (UNITY_INT)((arr[5])), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

}



void test_swapArraySlice3(void) {

    int arr[] = {10, 20, 30, 40, 50, 60};

    swapArraySlice(arr, 0, 6);

    UnityAssertEqualNumber((UNITY_INT)((60)), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((50)), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((40)), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((30)), (UNITY_INT)((arr[3])), (

   ((void *)0)

   ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((arr[4])), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((arr[5])), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}
