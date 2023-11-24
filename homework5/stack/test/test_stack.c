#include "unity.h"
#include "stack.h"

void test_push()
{
    stack* head = NULL;
    push(&head, 'A');
    TEST_ASSERT_NOT_NULL(head);
    TEST_ASSERT_EQUAL('A', head->value);
    TEST_ASSERT_NULL(head->next);
    
    push(&head, 'B');
    TEST_ASSERT_NOT_NULL(head);
    TEST_ASSERT_EQUAL('B', head->value);
    TEST_ASSERT_NOT_NULL(head->next);
    TEST_ASSERT_EQUAL('A', head->next->value);
    TEST_ASSERT_NULL(head->next->next);
}

void test_pop()
{
    stack* head = NULL;
    push(&head, 'A');
    push(&head, 'B');
    push(&head, 'C');

    pop(&head);
    TEST_ASSERT_NOT_NULL(head);
    TEST_ASSERT_EQUAL('B', head->value);
    TEST_ASSERT_NOT_NULL(head->next);
    TEST_ASSERT_EQUAL('A', head->next->value);
    TEST_ASSERT_NULL(head->next->next);

    pop(&head);
    TEST_ASSERT_NOT_NULL(head);
    TEST_ASSERT_EQUAL('A', head->value);
    TEST_ASSERT_NULL(head->next);

    pop(&head);
    TEST_ASSERT_NULL(head);
}

void test_topValue()
{
    stack* head = NULL;
    push(&head, 'A');
    TEST_ASSERT_EQUAL('A', topValue(head));

    push(&head, 'B');
    TEST_ASSERT_EQUAL('B', topValue(head));

    push(&head, 'C');
    TEST_ASSERT_EQUAL('C', topValue(head));

    pop(&head);
    TEST_ASSERT_EQUAL('B', topValue(head));

    pop(&head);
    TEST_ASSERT_EQUAL('A', topValue(head));

    pop(&head);
    TEST_ASSERT_EQUAL(NULL, topValue(head));
}


void test_clearStack()
{
    stack* head = NULL;
    push(&head, 'A');
    push(&head, 'B');
    push(&head, 'C');

    clearStack(&head);
    TEST_ASSERT_NULL(head);
}

void test_clearStack_emptyStack()
{
    stack* head = NULL;

    clearStack(&head);
    TEST_ASSERT_NULL(head);
}

void test_clearStack_singleNode()
{
    stack* head = NULL;
    push(&head, 'A');

    clearStack(&head);
    TEST_ASSERT_NULL(head);
}

void test_clearStack_multipleNodes()
{
    stack* head = NULL;
    push(&head, 'A');
    push(&head, 'B');
    push(&head, 'C');

    clearStack(&head);
    TEST_ASSERT_NULL(head);
}

void test_clearStack_largeStack()
{
    stack* head = NULL;
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        push(&head, c);
    }

    clearStack(&head);
    TEST_ASSERT_NULL(head);
}