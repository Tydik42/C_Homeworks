#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




typedef struct stack {

    char elem;

    struct stack *next;

} stack;



stack* push(stack* front, char elem);



stack* pop(stack* front);





void test_checkCorrect1( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("({})", parenthesis);

    do {if ((result)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(19)));}} while(0);

}



void test_checkCorrect2( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("({[}])", parenthesis);

    do {if (!(result)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(26)));}} while(0);

}



void test_checkCorrect3( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("", parenthesis);

    do {if (!(result)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(33)));}} while(0);

}



void test_checkCorrect4( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("()[]{[{}([]{})]}", parenthesis);

    do {if ((result)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(40)));}} while(0);

}



void test_push1( void )

{

    stack* front = 

                  ((void *)0)

                      ;

    front = push(front, 'a');

    do {if ((((front)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(47))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('a')), (UNITY_INT)((front->elem)), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

    do {if ((((front->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(49))));}} while(0);

}



void test_pop1( void )

{

    stack* front = 

                  ((void *)0)

                      ;

    front = push(front, 'a');

    front = push(front, 'b');

    front = push(front, 'c');

    front = pop(front);

    do {if ((((front)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(59))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('b')), (UNITY_INT)((front->elem)), (

   ((void *)0)

   ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

    do {if ((((front->next)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(61))));}} while(0);

    UnityAssertEqualNumber((UNITY_INT)(('a')), (UNITY_INT)((front->next->elem)), (

   ((void *)0)

   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_INT);

    do {if ((((front->next->next)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(63))));}} while(0);

}
