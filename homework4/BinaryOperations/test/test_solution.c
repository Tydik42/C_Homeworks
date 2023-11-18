#include "unity.h"
#include "solution.h"

void test_fromPositiveIntToBinary()
{
    int number1 = 5;
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number1, binary1, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number1, fromBinaryToInt(binary1, NUMBER_SIZE));

    int number2 = 10;
    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number2, binary2, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number2, fromBinaryToInt(binary2, NUMBER_SIZE));

    int number3 = 42;
    char* binary3 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number3, binary3, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number3, fromBinaryToInt(binary3, NUMBER_SIZE));

    free(binary1);
    free(binary2);
    free(binary3);
}

void test_fromNegativeIntToBinary()
{
    int number1 = -5;
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number1, binary1, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number1, fromBinaryToInt(binary1, NUMBER_SIZE));

    int number2 = -10;
    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number2, binary2, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number2, fromBinaryToInt(binary2, NUMBER_SIZE));

    free(binary1);
    free(binary2);
}

void test_fromBigIntToBinary()
{
    int number1 = 2147483647;
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number1, binary1, NUMBER_SIZE);

    int number2 = -2147483648;
    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number2, binary2, NUMBER_SIZE);

    int number3 = 664235;
    char* binary3 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number3, binary3, NUMBER_SIZE);

    free(binary1);
    free(binary2);
    free(binary3);                            
}

void test_fromZeroIntToBinary()
{
    int number1 = 0;
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    fromIntToBinary(number1, binary1, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(number1, fromBinaryToInt(binary1, NUMBER_SIZE));
    
    free(binary1);
}

void test_fromBinaryToInt()
{
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    binary1[NUMBER_SIZE - 2] = 1;
    binary1[NUMBER_SIZE - 1] = 1;
    TEST_ASSERT_EQUAL_INT(3, fromBinaryToInt(binary1, NUMBER_SIZE));

    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    binary2[NUMBER_SIZE - 1] = 1;
    binary2[NUMBER_SIZE - 2] = 1;
    binary2[NUMBER_SIZE - 3] = 1;
    binary2[NUMBER_SIZE - 10] = 1;
    TEST_ASSERT_EQUAL_INT(519, fromBinaryToInt(binary2, NUMBER_SIZE));
    
    free(binary1);
    free(binary2);
}

void test_fromNegativeBinaryToInt()
{
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    for (int i = 0; i < NUMBER_SIZE; ++i)
    {
        binary1[i] = 1;
    }
    TEST_ASSERT_EQUAL_INT(-1, fromBinaryToInt(binary1, NUMBER_SIZE));

    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    for (int i = 0; i < NUMBER_SIZE; ++i)
    {
        binary2[i] = 1;
    }
    binary2[NUMBER_SIZE - 1] = 0;
    binary2[NUMBER_SIZE - 2] = 0;
    binary2[NUMBER_SIZE - 3] = 0;
    TEST_ASSERT_EQUAL_INT(-8, fromBinaryToInt(binary2, NUMBER_SIZE));
}



void test_binarySum()
{
    char* firstBinaryNumber1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* secondBinaryNumber1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    int firstNumber1 = 5;
    int secondNumber1 = 10;
    fromIntToBinary(firstNumber1, firstBinaryNumber1, NUMBER_SIZE);
    fromIntToBinary(secondNumber1, secondBinaryNumber1, NUMBER_SIZE);
    char* actualSum1 = binarySum(firstBinaryNumber1, secondBinaryNumber1, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(firstNumber1 + secondNumber1, fromBinaryToInt(actualSum1, NUMBER_SIZE));
    free(actualSum1);
    free(firstBinaryNumber1);
    free(secondBinaryNumber1);

    char* firstBinaryNumber2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* secondBinaryNumber2 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    int firstNumber2 = 48;
    int secondNumber2 = -24;
    fromIntToBinary(firstNumber2, firstBinaryNumber2, NUMBER_SIZE);
    fromIntToBinary(secondNumber2, secondBinaryNumber2, NUMBER_SIZE);
    char* actualSum2 = binarySum(firstBinaryNumber2, secondBinaryNumber2, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(firstNumber2 + secondNumber2, fromBinaryToInt(actualSum2, NUMBER_SIZE));
    free(actualSum2);
    free(firstBinaryNumber2);
    free(secondBinaryNumber2);

    char* firstBinaryNumber3 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* secondBinaryNumber3 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    int firstNumber3 = -150;
    int secondNumber3 = 32;
    fromIntToBinary(firstNumber3, firstBinaryNumber3, NUMBER_SIZE);
    fromIntToBinary(secondNumber3, secondBinaryNumber3, NUMBER_SIZE);
    char* actualSum3 = binarySum(firstBinaryNumber3, secondBinaryNumber3, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(firstNumber3 + secondNumber3, fromBinaryToInt(actualSum3, NUMBER_SIZE));
    free(actualSum3);
    free(firstBinaryNumber3);
    free(secondBinaryNumber3);

    char* firstBinaryNumber4 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* secondBinaryNumber4 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    int firstNumber4 = -69;
    int secondNumber4 = -6710;
    fromIntToBinary(firstNumber4, firstBinaryNumber4, NUMBER_SIZE);
    fromIntToBinary(secondNumber4, secondBinaryNumber4, NUMBER_SIZE);
    char* actualSum4 = binarySum(firstBinaryNumber4, secondBinaryNumber4, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(firstNumber4 + secondNumber4, fromBinaryToInt(actualSum4, NUMBER_SIZE));
    free(actualSum4);
    free(firstBinaryNumber4);
    free(secondBinaryNumber4);

    char* firstBinaryNumber5 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* secondBinaryNumber5 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    int firstNumber5 = 1650426;
    int secondNumber5 = 9356151;
    fromIntToBinary(firstNumber5, firstBinaryNumber5, NUMBER_SIZE);
    fromIntToBinary(secondNumber5, secondBinaryNumber5, NUMBER_SIZE);
    char* actualSum5 = binarySum(firstBinaryNumber5, secondBinaryNumber5, NUMBER_SIZE);
    TEST_ASSERT_EQUAL_INT(firstNumber5 + secondNumber5, fromBinaryToInt(actualSum5, NUMBER_SIZE));
    free(actualSum5);
    free(firstBinaryNumber5);
    free(secondBinaryNumber5);
}