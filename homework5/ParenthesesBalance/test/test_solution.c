#include "unity.h"

#include "solution.h"


void test_checkCorrect1( void )
{
    stack* parenthesis = NULL;
    int result = checkCorrect("({})", parenthesis);
    TEST_ASSERT_TRUE(result);
}

void test_checkCorrect2( void )
{
    stack* parenthesis = NULL;
    int result = checkCorrect("({[}])", parenthesis);
    TEST_ASSERT_FALSE(result);
}

void test_checkCorrect3( void )
{
    stack* parenthesis = NULL;
    int result = checkCorrect("", parenthesis);
    TEST_ASSERT_FALSE(result);
}

void test_checkCorrect4( void )
{
    stack* parenthesis = NULL;
    int result = checkCorrect("()[]{[{}([]{})]}", parenthesis);
    TEST_ASSERT_TRUE(result);
}