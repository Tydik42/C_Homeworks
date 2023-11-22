#include "unity.h"
#include "solution.h"

void test_findPhoneByName_should_return_correct_phone_number(void) {
    PhoneEntry phonebook[] = {
        {"John Doe", "1234567890"},
        {"Jane Smith", "9876543210"},
        {"Alice Johnson", "5555555555"}
    };
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0])); 

    char* result = findPhoneByName(phonebook, NumberOfRecords, "Jane Smith");

    TEST_ASSERT_EQUAL_STRING("9876543210", result);
}

void test_findPhoneByName_should_return_null_if_name_not_found(void) {
    PhoneEntry phonebook[] = {
        {"John Doe", "1234567890"},
        {"Jane Smith", "9876543210"},
        {"Alice Johnson", "5555555555"}
    };
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));

    char* result = findPhoneByName(phonebook, NumberOfRecords, "Bob Johnson");

    TEST_ASSERT_NULL(result);
}

void test_findPhoneByName_should_return_null_if_phonebook_empty(void) {
    PhoneEntry phonebook[] = {};
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));

    char* result = findPhoneByName(phonebook, NumberOfRecords, "John Doe");

    TEST_ASSERT_NULL(result);
}

void test_findPhoneByName_should_return_null_if_name_is_empty(void) {
    PhoneEntry phonebook[] = {
        {"John Doe", "1234567890"},
        {"Jane Smith", "9876543210"},
        {"Alice Johnson", "5555555555"}
    };
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));

    char* result = findPhoneByName(phonebook, NumberOfRecords, "");

    TEST_ASSERT_NULL(result);
}

void test_findPhoneByName_should_ignore_case_when_searching(void) {
    PhoneEntry phonebook[] = {
        {"John Doe", "1234567890"},
        {"Jane Smith", "9876543210"},
        {"Alice Johnson", "5555555555"}
    };
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));

    char* result = findPhoneByName(phonebook, NumberOfRecords, "Jane Smith");

    TEST_ASSERT_EQUAL_STRING("9876543210", result);
}

void test_findPhoneByName_should_return_first_match_if_multiple_names_exist(void) {
    PhoneEntry phonebook[] = {
        {"John Doe", "1234567890"},
        {"Jane Smith", "9876543210"},
        {"Alice Johnson", "5555555555"},
        {"John Doe", "9999999999"}
    };
    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));

    char* result = findPhoneByName(phonebook, NumberOfRecords, "John Doe");

    TEST_ASSERT_EQUAL_STRING("1234567890", result);
}
void test_addRecord_should_add_record_to_phonebook(void) {
    PhoneEntry phonebook[2];
    size_t NumberOfRecords = 0;

    char name[] = "John Doe";
    char phone[] = "1234567890";
    addRecord(phonebook, &NumberOfRecords, name, phone, 2);
    TEST_ASSERT_EQUAL_STRING(name, phonebook[0].name);
    TEST_ASSERT_EQUAL_STRING(phone, phonebook[0].phone);
    TEST_ASSERT_EQUAL(1, NumberOfRecords);
}

void test_addRecord_should_add_multiple_records_to_phonebook(void) {
    PhoneEntry phonebook[2];
    size_t NumberOfRecords = 0;

    char name[] = "John Doe";
    char phone[] = "1234567890";
    addRecord(phonebook, &NumberOfRecords, name, phone, 2);
    TEST_ASSERT_EQUAL_STRING(name, phonebook[0].name);
    TEST_ASSERT_EQUAL_STRING(phone, phonebook[0].phone);
    TEST_ASSERT_EQUAL(1, NumberOfRecords);

    char name2[] = "Jane Smith";
    char phone2[] = "9876543210";
    addRecord(phonebook, &NumberOfRecords, name2, phone2, 2);
    TEST_ASSERT_EQUAL_STRING(name2, phonebook[1].name);
    TEST_ASSERT_EQUAL_STRING(phone2, phonebook[1].phone);
    TEST_ASSERT_EQUAL(2, NumberOfRecords);
}

void test_addRecord_should_not_add_record_if_phonebook_is_full(void) {
    PhoneEntry phonebook[3];
    size_t NumberOfRecords = 0;
    
    char name[] = "John Doe";
    char phone[] = "1234567890";
    addRecord(phonebook, &NumberOfRecords, name, phone, 2);
    TEST_ASSERT_EQUAL_STRING(name, phonebook[0].name);
    TEST_ASSERT_EQUAL_STRING(phone, phonebook[0].phone);
    TEST_ASSERT_EQUAL(1, NumberOfRecords);

    char name2[] = "Jane Smith";
    char phone2[] = "9876543210";
    addRecord(phonebook, &NumberOfRecords, name2, phone2, 2);
    TEST_ASSERT_EQUAL_STRING(name, phonebook[0].name);
    TEST_ASSERT_EQUAL_STRING(phone, phonebook[0].phone);
    TEST_ASSERT_EQUAL(2, NumberOfRecords);

    char name3[] = "Alice Johnson";
    char phone3[] = "5555555555";
    addRecord(phonebook, &NumberOfRecords, name3, phone3, 2);
    TEST_ASSERT_EQUAL(2, NumberOfRecords);
}