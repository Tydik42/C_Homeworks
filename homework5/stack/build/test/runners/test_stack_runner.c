/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_push();
extern void test_pop();
extern void test_topValue();
extern void test_clearStack();
extern void test_clearStack_emptyStack();
extern void test_clearStack_singleNode();
extern void test_clearStack_multipleNodes();
extern void test_clearStack_largeStack();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Setup (stub)=====*/
void setUp(void) {}

/*=======Teardown (stub)=====*/
void tearDown(void) {}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_stack.c");
  run_test(test_push, "test_push", 4);
  run_test(test_pop, "test_pop", 20);
  run_test(test_topValue, "test_topValue", 43);
  run_test(test_clearStack, "test_clearStack", 66);
  run_test(test_clearStack_emptyStack, "test_clearStack_emptyStack", 77);
  run_test(test_clearStack_singleNode, "test_clearStack_singleNode", 85);
  run_test(test_clearStack_multipleNodes, "test_clearStack_multipleNodes", 94);
  run_test(test_clearStack_largeStack, "test_clearStack_largeStack", 105);

  return UnityEnd();
}