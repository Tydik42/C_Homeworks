#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define NAME_SIZE 40
#define PHONE_SIZE 20
#define PHONE_BOOK_SIZE 100
#define BUFFER_SIZE 100
#define FILE_NAME "phonebook.txt"

typedef struct {
    char name[NAME_SIZE];
    char phone[PHONE_SIZE];
} PhoneEntry;

int run(int argc, char *argv[]);

void addRecord(PhoneEntry phonebook[], size_t *numberOfRecords, const char* name, const char* phone, const size_t phonebookSize);

void printPhoneBook(PhoneEntry phonebook[], const size_t NumberOfRecords);

char* findPhoneByName(PhoneEntry phonebook[], const size_t numberOfRecords, const char* name);

char* findNameByPhone(PhoneEntry phonebook[], const size_t NumberOfRecords, const char* phone);

void getFileData(const char fileName[], PhoneEntry phonebook[], size_t *numberOfRecords);

void saveFile(const char fileName[], PhoneEntry phonebook[], const size_t numberOfRecords);