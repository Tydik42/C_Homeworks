#include "unity.h"

#include "solution.h"
#define LEN_OF_TICKET   6


void test_intToArr1( void )
{
    int arr[LEN_OF_TICKET] = {0};
    intToArr(arr, 12345);
    TEST_ASSERT_EQUAL_INT(arr[0], 0);
    TEST_ASSERT_EQUAL_INT(arr[1], 1);
    TEST_ASSERT_EQUAL_INT(arr[2], 2);
    TEST_ASSERT_EQUAL_INT(arr[3], 3);
    TEST_ASSERT_EQUAL_INT(arr[4], 4);
    TEST_ASSERT_EQUAL_INT(arr[5], 5);
}

void test_intToArr2( void )
{
    int arr[LEN_OF_TICKET] = {0};
    intToArr(arr, 987654);
    TEST_ASSERT_EQUAL_INT(arr[0], 9);
    TEST_ASSERT_EQUAL_INT(arr[1], 8);
    TEST_ASSERT_EQUAL_INT(arr[2], 7);
    TEST_ASSERT_EQUAL_INT(arr[3], 6);
    TEST_ASSERT_EQUAL_INT(arr[4], 5);
    TEST_ASSERT_EQUAL_INT(arr[5], 4);
}

void test_intToArr3( void )
{
    int arr[LEN_OF_TICKET] = {0};
    intToArr(arr, 0);
    TEST_ASSERT_EQUAL_INT(arr[0], 0);
    TEST_ASSERT_EQUAL_INT(arr[1], 0);
    TEST_ASSERT_EQUAL_INT(arr[2], 0);
    TEST_ASSERT_EQUAL_INT(arr[3], 0);
    TEST_ASSERT_EQUAL_INT(arr[4], 0);
    TEST_ASSERT_EQUAL_INT(arr[5], 0);
}


void test_checker1( void )
{
    int arr[6] = {1, 6, 3, 4, 5, 1};
    TEST_ASSERT_TRUE(checker(arr));
}

void test_checker2( void )
{
    int arr[6] = {1, 1, 1, 1, 1, 3};
    TEST_ASSERT_FALSE(checker(arr));
}

void test_checker3( void )
{
    int arr[6] = {0, 0, 0, 0, 0, 0};
    TEST_ASSERT_TRUE(checker(arr));
}

void test_checker4( void )
{
    int arr[6] = {1, 1, 1, 1, 1, 1};
    TEST_ASSERT_TRUE(checker(arr));
}

void test_calculateLuckyTickets( void )
{
    int expected = 55252;
    int actual = calculateLuckyTickets();
    TEST_ASSERT_EQUAL_INT(expected, actual);
}
