#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_sieveOfEratosthenes1(void) {

    

   _Bool 

        arr[11] = {0};

    sieveOfEratosthenes(10, arr);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((arr[2])), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((arr[3])), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((arr[5])), (

   ((void *)0)

   ), (UNITY_UINT)(10), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((arr[7])), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[0])), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[1])), (

   ((void *)0)

   ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[4])), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[6])), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[8])), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[9])), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((arr[10])), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}
