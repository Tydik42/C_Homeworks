#include "src/solution.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_findPhoneByName_should_return_correct_phone_number(void) {

    PhoneEntry phonebook[] = {

        {"John Doe", "1234567890"},

        {"Jane Smith", "9876543210"},

        {"Alice Johnson", "5555555555"}

    };

    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));



    char* result = findPhoneByName(phonebook, NumberOfRecords, "Jane Smith");



    UnityAssertEqualString((const char*)(("9876543210")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(14));

}



void test_findPhoneByName_should_return_null_if_name_not_found(void) {

    PhoneEntry phonebook[] = {

        {"John Doe", "1234567890"},

        {"Jane Smith", "9876543210"},

        {"Alice Johnson", "5555555555"}

    };

    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));



    char* result = findPhoneByName(phonebook, NumberOfRecords, "Bob Johnson");



    do {if ((((result)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(27))));}} while(0);

}



void test_findPhoneByName_should_return_null_if_phonebook_empty(void) {

    PhoneEntry phonebook[] = {};

    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));



    char* result = findPhoneByName(phonebook, NumberOfRecords, "John Doe");



    do {if ((((result)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(36))));}} while(0);

}



void test_findPhoneByName_should_return_null_if_name_is_empty(void) {

    PhoneEntry phonebook[] = {

        {"John Doe", "1234567890"},

        {"Jane Smith", "9876543210"},

        {"Alice Johnson", "5555555555"}

    };

    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));



    char* result = findPhoneByName(phonebook, NumberOfRecords, "");



    do {if ((((result)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(49))));}} while(0);

}



void test_findPhoneByName_should_ignore_case_when_searching(void) {

    PhoneEntry phonebook[] = {

        {"John Doe", "1234567890"},

        {"Jane Smith", "9876543210"},

        {"Alice Johnson", "5555555555"}

    };

    size_t NumberOfRecords = sizeof(phonebook) / (sizeof(phonebook[0]));



    char* result = findPhoneByName(phonebook, NumberOfRecords, "Jane Smith");



    UnityAssertEqualString((const char*)(("9876543210")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(62));

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



    UnityAssertEqualString((const char*)(("1234567890")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(76));

}

void test_addRecord_should_add_record_to_phonebook(void) {

    PhoneEntry phonebook[2];

    size_t NumberOfRecords = 0;



    char name[] = "John Doe";

    char phone[] = "1234567890";

    addRecord(phonebook, &NumberOfRecords, name, phone, 2);

    UnityAssertEqualString((const char*)((name)), (const char*)((phonebook[0].name)), (

   ((void *)0)

   ), (UNITY_UINT)(85));

    UnityAssertEqualString((const char*)((phone)), (const char*)((phonebook[0].phone)), (

   ((void *)0)

   ), (UNITY_UINT)(86));

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

}



void test_addRecord_should_add_multiple_records_to_phonebook(void) {

    PhoneEntry phonebook[2];

    size_t NumberOfRecords = 0;



    char name[] = "John Doe";

    char phone[] = "1234567890";

    addRecord(phonebook, &NumberOfRecords, name, phone, 2);

    UnityAssertEqualString((const char*)((name)), (const char*)((phonebook[0].name)), (

   ((void *)0)

   ), (UNITY_UINT)(97));

    UnityAssertEqualString((const char*)((phone)), (const char*)((phonebook[0].phone)), (

   ((void *)0)

   ), (UNITY_UINT)(98));

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);



    char name2[] = "Jane Smith";

    char phone2[] = "9876543210";

    addRecord(phonebook, &NumberOfRecords, name2, phone2, 2);

    UnityAssertEqualString((const char*)((name2)), (const char*)((phonebook[1].name)), (

   ((void *)0)

   ), (UNITY_UINT)(104));

    UnityAssertEqualString((const char*)((phone2)), (const char*)((phonebook[1].phone)), (

   ((void *)0)

   ), (UNITY_UINT)(105));

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_INT);

}



void test_addRecord_should_not_add_record_if_phonebook_is_full(void) {

    PhoneEntry phonebook[3];

    size_t NumberOfRecords = 0;



    char name[] = "John Doe";

    char phone[] = "1234567890";

    addRecord(phonebook, &NumberOfRecords, name, phone, 2);

    UnityAssertEqualString((const char*)((name)), (const char*)((phonebook[0].name)), (

   ((void *)0)

   ), (UNITY_UINT)(116));

    UnityAssertEqualString((const char*)((phone)), (const char*)((phonebook[0].phone)), (

   ((void *)0)

   ), (UNITY_UINT)(117));

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);



    char name2[] = "Jane Smith";

    char phone2[] = "9876543210";

    addRecord(phonebook, &NumberOfRecords, name2, phone2, 2);

    UnityAssertEqualString((const char*)((name)), (const char*)((phonebook[0].name)), (

   ((void *)0)

   ), (UNITY_UINT)(123));

    UnityAssertEqualString((const char*)((phone)), (const char*)((phonebook[0].phone)), (

   ((void *)0)

   ), (UNITY_UINT)(124));

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);



    char name3[] = "Alice Johnson";

    char phone3[] = "5555555555";

    addRecord(phonebook, &NumberOfRecords, name3, phone3, 2);

    UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((NumberOfRecords)), (

   ((void *)0)

   ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_INT);

}
