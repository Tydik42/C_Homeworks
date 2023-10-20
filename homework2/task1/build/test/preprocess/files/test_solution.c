#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_recursiveFibonacciCounter_with_negative_number(void) {

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((recursiveFibonacciCounter(-1))), (

   ((void *)0)

   ), (UNITY_UINT)(7), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_zero(void) {

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((recursiveFibonacciCounter(0))), (

   ((void *)0)

   ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_one(void) {

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((recursiveFibonacciCounter(1))), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_two(void) {

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((recursiveFibonacciCounter(2))), (

   ((void *)0)

   ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_three(void) {

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((recursiveFibonacciCounter(3))), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_seven(void) {

    UnityAssertEqualNumber((UNITY_INT)((13)), (UNITY_INT)((recursiveFibonacciCounter(7))), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

}



void test_recursiveFibonacciCounter_with_large_number(void) {

    UnityAssertEqualNumber((UNITY_INT)((1134903170)), (UNITY_INT)((recursiveFibonacciCounter(45))), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}







void test_iterativeFibonacciCounter_with_negative_number(void) {

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((iterativeFibonacciCounter(-1))), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_zero(void) {

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((iterativeFibonacciCounter(0))), (

   ((void *)0)

   ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_one(void) {

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((iterativeFibonacciCounter(1))), (

   ((void *)0)

   ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_two(void) {

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((iterativeFibonacciCounter(2))), (

   ((void *)0)

   ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_three(void) {

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((iterativeFibonacciCounter(3))), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_seven(void) {

    UnityAssertEqualNumber((UNITY_INT)((13)), (UNITY_INT)((iterativeFibonacciCounter(7))), (

   ((void *)0)

   ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT);

}



void test_iterativeFibonacciCounter_with_large_number(void) {

    UnityAssertEqualNumber((UNITY_INT)((1134903170)), (UNITY_INT)((iterativeFibonacciCounter(45))), (

   ((void *)0)

   ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_INT);

}
