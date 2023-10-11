#include "unity.h"

#include "solution.h"


void test_swap1( void )
{
    int a = 42, b = 1337;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 1337);
    TEST_ASSERT_EQUAL_INT(b, 42);
}

void test_swap2( void )
{
    int a = 14, b = 88;

    swap(&a, &b);

    TEST_ASSERT_EQUAL_INT(a, 88);
    TEST_ASSERT_EQUAL_INT(b, 14);
}