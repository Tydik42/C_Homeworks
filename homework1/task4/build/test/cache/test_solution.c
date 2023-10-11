#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void test_intToArr1( void )

{

    int arr[6] = {0};

    intToArr(arr, 12345);

    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((1)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((2)), (

   ((void *)0)

   ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

}



void test_intToArr2( void )

{

    int arr[6] = {0};

    intToArr(arr, 987654);

    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((9)), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((8)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((7)), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((6)), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_intToArr3( void )

{

    int arr[6] = {0};

    intToArr(arr, 0);

    UnityAssertEqualNumber((UNITY_INT)((arr[0])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[1])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[2])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[3])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[4])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((arr[5])), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_INT);

}





void test_checker1( void )

{

    int arr[6] = {1, 6, 3, 4, 5, 1};

    do {if ((checker(arr))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(47)));}} while(0);

}



void test_checker2( void )

{

    int arr[6] = {1, 1, 1, 1, 1, 3};

    do {if (!(checker(arr))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(53)));}} while(0);

}



void test_checker3( void )

{

    int arr[6] = {0, 0, 0, 0, 0, 0};

    do {if ((checker(arr))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(59)));}} while(0);

}



void test_checker4( void )

{

    int arr[6] = {1, 1, 1, 1, 1, 1};

    do {if ((checker(arr))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(65)));}} while(0);

}



void test_calculateLuckyTickets( void )

{

    int expected = 55252;

    int actual = calculateLuckyTickets();

    UnityAssertEqualNumber((UNITY_INT)((expected)), (UNITY_INT)((actual)), (

   ((void *)0)

   ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT);

}
