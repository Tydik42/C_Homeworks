#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_countZeros1( void )

{

    int numbers[] = {42, 0, -1488, 0, 0};

    int result = countZeros(numbers, 5);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

}



void test_countZeros2( void )

{

    int numbers[] = {};

    int result = countZeros(numbers, 0);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

}



void test_countZeros3( void )

{

    int numbers[] = {0, 0, 0, 0, 0};

    int result = countZeros(numbers, 5);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_countZeros4( void )

{

    int numbers[] = {1, 564, 5685, 1215, -136516, 8435, 125313075};

    int result = countZeros(numbers, 7);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}
