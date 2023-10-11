#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_findQuotient1( void )

{

    int result = findQuotient(10, 2);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((5)), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

}



void test_findQuotient2( void )

{

    int result = findQuotient(10, 3);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}



void test_findQuotient3( void )

{

    int result = findQuotient(-10, 3);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((-3)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}



void test_findQuotient4( void )

{

    int result = findQuotient(0, 3);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((0)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

}



void test_findQuotient5( void )

{

    int result = findQuotient(10, 0);

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((-1)), (

   ((void *)0)

   ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

}
