#pragma once

int run(int argc, char *argv[]);

void swap(int arr[], int num1, int num2);

void generateRandomArray(int arr[], int len);

void smartQSort(int* const array, const size_t leftBorder, const size_t rightBorder);

void insertionSort(int* const array, const size_t leftBorder, const size_t rightBorder);

int binarySearch(const int* array, const int number, const size_t arraySize);

int readPositiveInt();

int isSorted(int arr[], int len);