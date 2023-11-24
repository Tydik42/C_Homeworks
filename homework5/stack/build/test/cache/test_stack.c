#include "src/stack.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_push()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');

    do {if ((((head)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(8))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((head->value)), (

   ((void *)0)

   ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(10))));}} while(0);



    push(&head, 'B');

    do {if ((((head)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(13))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('B')), (UNITY_INT)((head->value)), (

   ((void *)0)

   ), (UNITY_UINT)(14), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(15))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((head->next->value)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(17))));}} while(0);

}



void test_pop()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');

    push(&head, 'B');

    push(&head, 'C');



    pop(&head);

    do {if ((((head)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(28))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('B')), (UNITY_INT)((head->value)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(30))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((head->next->value)), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(32))));}} while(0);



    pop(&head);

    do {if ((((head)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(35))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((head->value)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

    do {if ((((head->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(37))));}} while(0);



    pop(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(40))));}} while(0);

}



void test_topValue()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);



    push(&head, 'B');

    UnityAssertEqualNumber((UNITY_INT)(('B')), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);



    push(&head, 'C');

    UnityAssertEqualNumber((UNITY_INT)(('C')), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);



    pop(&head);

    UnityAssertEqualNumber((UNITY_INT)(('B')), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_INT);



    pop(&head);

    UnityAssertEqualNumber((UNITY_INT)(('A')), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);



    pop(&head);

    UnityAssertEqualNumber((UNITY_INT)((

   ((void *)0)

   )), (UNITY_INT)((topValue(head))), (

   ((void *)0)

   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);

}





void test_clearStack()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');

    push(&head, 'B');

    push(&head, 'C');



    clearStack(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(74))));}} while(0);

}



void test_clearStack_emptyStack()

{

    stack* head = 

                 ((void *)0)

                     ;



    clearStack(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(82))));}} while(0);

}



void test_clearStack_singleNode()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');



    clearStack(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(91))));}} while(0);

}



void test_clearStack_multipleNodes()

{

    stack* head = 

                 ((void *)0)

                     ;

    push(&head, 'A');

    push(&head, 'B');

    push(&head, 'C');



    clearStack(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(102))));}} while(0);

}



void test_clearStack_largeStack()

{

    stack* head = 

                 ((void *)0)

                     ;

    for (char c = 'A'; c <= 'Z'; ++c)

    {

        push(&head, c);

    }



    clearStack(&head);

    do {if ((((head)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(114))));}} while(0);

}
