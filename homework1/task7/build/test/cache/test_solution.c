#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_count_occurrences1(void) {

    char string[] = "hello world";

    char substring[] = "l";

    int count = count_occurrences(string, substring);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

}



void test_count_occurrences2(void) {

    char string[] = "hello world";

    char substring[] = "lo";

    int count = count_occurrences(string, substring);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}



void test_count_occurrences3(void) {

    char string[] = "hello world";

    char substring[] = "z";

    int count = count_occurrences(string, substring);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_count_occurrences4(void) {

    char string[] = "hello world";

    char substring[] = "world";

    int count = count_occurrences(string, substring);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}
