#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define NUMBER_SIZE sizeof(int) * 8

int run(int argc, char *argv[]);

void printBinary(const char* const binary, const size_t size);

void fromIntToBinary(int number, char* const binary, const size_t size);

int fromBinaryToInt(char* const binary, const size_t size);

char* binarySum(const char* const binary1, const char* const binary2, const size_t size);

int read_int();

void read_two_ints(int* num1, int* num2);
