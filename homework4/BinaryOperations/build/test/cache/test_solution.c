#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_fromPositiveIntToBinary()

{

    int number1 = 5;

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number1, binary1, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number1)), (UNITY_INT)((fromBinaryToInt(binary1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);



    int number2 = 10;

    char* binary2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number2, binary2, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number2)), (UNITY_INT)((fromBinaryToInt(binary2, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);



    int number3 = 42;

    char* binary3 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number3, binary3, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number3)), (UNITY_INT)((fromBinaryToInt(binary3, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);



    free(binary1);

    free(binary2);

    free(binary3);

}



void test_fromNegativeIntToBinary()

{

    int number1 = -5;

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number1, binary1, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number1)), (UNITY_INT)((fromBinaryToInt(binary1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);



    int number2 = -10;

    char* binary2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number2, binary2, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number2)), (UNITY_INT)((fromBinaryToInt(binary2, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);



    free(binary1);

    free(binary2);

}



void test_fromBigIntToBinary()

{

    int number1 = 2147483647;

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number1, binary1, sizeof(int) * 8);



    int number2 = -2147483648;

    char* binary2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number2, binary2, sizeof(int) * 8);



    int number3 = 664235;

    char* binary3 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number3, binary3, sizeof(int) * 8);



    free(binary1);

    free(binary2);

    free(binary3);

}



void test_fromZeroIntToBinary()

{

    int number1 = 0;

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    fromIntToBinary(number1, binary1, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((number1)), (UNITY_INT)((fromBinaryToInt(binary1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT);



    free(binary1);

}



void test_fromBinaryToInt()

{

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    binary1[sizeof(int) * 8 - 2] = 1;

    binary1[sizeof(int) * 8 - 1] = 1;

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((fromBinaryToInt(binary1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_INT);



    char* binary2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    binary2[sizeof(int) * 8 - 1] = 1;

    binary2[sizeof(int) * 8 - 2] = 1;

    binary2[sizeof(int) * 8 - 3] = 1;

    binary2[sizeof(int) * 8 - 10] = 1;

    UnityAssertEqualNumber((UNITY_INT)((519)), (UNITY_INT)((fromBinaryToInt(binary2, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_INT);



    free(binary1);

    free(binary2);

}



void test_fromNegativeBinaryToInt()

{

    char* binary1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    for (int i = 0; i < sizeof(int) * 8; ++i)

    {

        binary1[i] = 1;

    }

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((fromBinaryToInt(binary1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);



    char* binary2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    for (int i = 0; i < sizeof(int) * 8; ++i)

    {

        binary2[i] = 1;

    }

    binary2[sizeof(int) * 8 - 1] = 0;

    binary2[sizeof(int) * 8 - 2] = 0;

    binary2[sizeof(int) * 8 - 3] = 0;

    UnityAssertEqualNumber((UNITY_INT)((-8)), (UNITY_INT)((fromBinaryToInt(binary2, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

}







void test_binarySum()

{

    char* firstBinaryNumber1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    char* secondBinaryNumber1 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    int firstNumber1 = 5;

    int secondNumber1 = 10;

    fromIntToBinary(firstNumber1, firstBinaryNumber1, sizeof(int) * 8);

    fromIntToBinary(secondNumber1, secondBinaryNumber1, sizeof(int) * 8);

    char* actualSum1 = binarySum(firstBinaryNumber1, secondBinaryNumber1, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((firstNumber1 + secondNumber1)), (UNITY_INT)((fromBinaryToInt(actualSum1, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_INT);

    free(actualSum1);

    free(firstBinaryNumber1);

    free(secondBinaryNumber1);



    char* firstBinaryNumber2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    char* secondBinaryNumber2 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    int firstNumber2 = 48;

    int secondNumber2 = -24;

    fromIntToBinary(firstNumber2, firstBinaryNumber2, sizeof(int) * 8);

    fromIntToBinary(secondNumber2, secondBinaryNumber2, sizeof(int) * 8);

    char* actualSum2 = binarySum(firstBinaryNumber2, secondBinaryNumber2, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((firstNumber2 + secondNumber2)), (UNITY_INT)((fromBinaryToInt(actualSum2, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(132), UNITY_DISPLAY_STYLE_INT);

    free(actualSum2);

    free(firstBinaryNumber2);

    free(secondBinaryNumber2);



    char* firstBinaryNumber3 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    char* secondBinaryNumber3 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    int firstNumber3 = -150;

    int secondNumber3 = 32;

    fromIntToBinary(firstNumber3, firstBinaryNumber3, sizeof(int) * 8);

    fromIntToBinary(secondNumber3, secondBinaryNumber3, sizeof(int) * 8);

    char* actualSum3 = binarySum(firstBinaryNumber3, secondBinaryNumber3, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((firstNumber3 + secondNumber3)), (UNITY_INT)((fromBinaryToInt(actualSum3, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(144), UNITY_DISPLAY_STYLE_INT);

    free(actualSum3);

    free(firstBinaryNumber3);

    free(secondBinaryNumber3);



    char* firstBinaryNumber4 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    char* secondBinaryNumber4 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    int firstNumber4 = -69;

    int secondNumber4 = -6710;

    fromIntToBinary(firstNumber4, firstBinaryNumber4, sizeof(int) * 8);

    fromIntToBinary(secondNumber4, secondBinaryNumber4, sizeof(int) * 8);

    char* actualSum4 = binarySum(firstBinaryNumber4, secondBinaryNumber4, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((firstNumber4 + secondNumber4)), (UNITY_INT)((fromBinaryToInt(actualSum4, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_INT);

    free(actualSum4);

    free(firstBinaryNumber4);

    free(secondBinaryNumber4);



    char* firstBinaryNumber5 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    char* secondBinaryNumber5 = (char*)calloc(sizeof(int) * 8, sizeof(char));

    int firstNumber5 = 1650426;

    int secondNumber5 = 9356151;

    fromIntToBinary(firstNumber5, firstBinaryNumber5, sizeof(int) * 8);

    fromIntToBinary(secondNumber5, secondBinaryNumber5, sizeof(int) * 8);

    char* actualSum5 = binarySum(firstBinaryNumber5, secondBinaryNumber5, sizeof(int) * 8);

    UnityAssertEqualNumber((UNITY_INT)((firstNumber5 + secondNumber5)), (UNITY_INT)((fromBinaryToInt(actualSum5, sizeof(int) * 8))), (

   ((void *)0)

   ), (UNITY_UINT)(168), UNITY_DISPLAY_STYLE_INT);

    free(actualSum5);

    free(firstBinaryNumber5);

    free(secondBinaryNumber5);

}
