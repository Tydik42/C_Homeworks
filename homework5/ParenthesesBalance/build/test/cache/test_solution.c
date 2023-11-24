#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void test_checkCorrect1( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("({})", parenthesis);

    do {if ((result)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(10)));}} while(0);

}



void test_checkCorrect2( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("({[}])", parenthesis);

    do {if (!(result)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(17)));}} while(0);

}



void test_checkCorrect3( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("", parenthesis);

    do {if (!(result)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(24)));}} while(0);

}



void test_checkCorrect4( void )

{

    stack* parenthesis = 

                        ((void *)0)

                            ;

    int result = checkCorrect("()[]{[{}([]{})]}", parenthesis);

    do {if ((result)) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(31)));}} while(0);

}
