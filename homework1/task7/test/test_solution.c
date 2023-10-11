#include "unity.h"
#include "solution.h"

void test_count_occurrences1(void) {
    char string[] = "hello world";
    char substring[] = "l";
    int count = count_occurrences(string, substring);
    TEST_ASSERT_EQUAL(3, count);
}

void test_count_occurrences2(void) {
    char string[] = "hello world";
    char substring[] = "lo";
    int count = count_occurrences(string, substring);
    TEST_ASSERT_EQUAL(1, count);
}

void test_count_occurrences3(void) {
    char string[] = "hello world";
    char substring[] = "z";
    int count = count_occurrences(string, substring);
    TEST_ASSERT_EQUAL(0, count);
}

void test_count_occurrences4(void) {
    char string[] = "hello world";
    char substring[] = "world";
    int count = count_occurrences(string, substring);
    TEST_ASSERT_EQUAL(1, count);
}