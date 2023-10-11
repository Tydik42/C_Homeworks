#include "unity.h"

#include "solution.h"

typedef struct stack {
    char elem;
    struct stack *next;
} stack;

stack* push(stack* front, char elem);

stack* pop(stack* front);


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

void test_push1( void )
{
    stack* front = NULL;
    front = push(front, 'a');
    TEST_ASSERT_NOT_NULL(front);
    TEST_ASSERT_EQUAL('a', front->elem);
    TEST_ASSERT_NULL(front->next);
}

void test_pop1( void )
{
    stack* front = NULL;
    front = push(front, 'a');
    front = push(front, 'b');
    front = push(front, 'c');
    front = pop(front);
    TEST_ASSERT_NOT_NULL(front);
    TEST_ASSERT_EQUAL('b', front->elem);
    TEST_ASSERT_NOT_NULL(front->next);
    TEST_ASSERT_EQUAL('a', front->next->elem);
    TEST_ASSERT_NULL(front->next->next);
}