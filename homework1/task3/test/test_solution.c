#include "unity.h"

#include "solution.h"


void test_findQuotient1( void )
{
    int result = findQuotient(10, 2);
    TEST_ASSERT_EQUAL_INT(result, 5);
}

void test_findQuotient2( void )
{
    int result = findQuotient(10, 3);
    TEST_ASSERT_EQUAL_INT(result, 3);
}

void test_findQuotient3( void )
{
    int result = findQuotient(-10, 3);
    TEST_ASSERT_EQUAL_INT(result, -3);
}

void test_findQuotient4( void )
{
    int result = findQuotient(0, 3);
    TEST_ASSERT_EQUAL_INT(result, 0);
}

void test_findQuotient5( void )
{
    int result = findQuotient(10, 0);
    TEST_ASSERT_EQUAL_INT(result, -1);
}