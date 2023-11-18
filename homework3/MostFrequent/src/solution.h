#pragma once

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define MIN_RAND    -100
#define MAX_RAND    100

int run(int argc, char *argv[]);

void swap(int arr[], int num1, int num2);

void generateRandomArray(int arr[], int len);

void smartQSort(int* const array, const size_t leftBorder, const size_t rightBorder);

void insertionSort(int* const array, const size_t leftBorder, const size_t rightBorder);

int mostFrequentElement(int* const array, const size_t len);

int readPositiveInt();

int isSorted(int arr[], int len);