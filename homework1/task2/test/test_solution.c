#include "unity.h"

#include "solution.h"


void test_countZeros1( void )
{
    int numbers[] = {42, 0, -1488, 0, 0};
    int result = countZeros(numbers, 5);
    TEST_ASSERT_EQUAL_INT(result, 3);
}

void test_countZeros2( void )
{
    int numbers[] = {};
    int result = countZeros(numbers, 0);
    TEST_ASSERT_EQUAL_INT(result, 0);
}

void test_countZeros3( void )
{
    int numbers[] = {0, 0, 0, 0, 0};
    int result = countZeros(numbers, 5);
    TEST_ASSERT_EQUAL_INT(result, 5);
}

void test_countZeros4( void )
{
    int numbers[] = {1, 564, 5685, 1215, -136516, 8435, 125313075};
    int result = countZeros(numbers, 7);
    TEST_ASSERT_EQUAL_INT(result, 0);
}