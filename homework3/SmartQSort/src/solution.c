#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include "solution.h"
#define MIN_RAND    -100000
#define MAX_RAND    100000
#define ARRAY_SIZE  10000


/*Реализовать qsort, который для сортировки кусков массива размером меньше 10 использует сортировку вставкой.*/

void generateRandomArray(int arr[], int len) 
{
    for (int i = 0; i < len; ++i) {
        arr[i] = (rand() % (MAX_RAND - MIN_RAND + 1)) + MIN_RAND;
    }
}

int isSorted(int arr[], int len) {
    for(int i = 0; i < len - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}


void swap(int arr[], int num1, int num2) 
{
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void insertionSort(int* const array, const size_t leftBorder, const size_t rightBorder)
{
	for (size_t i = leftBorder + 1; i < rightBorder; ++i)
		{
			for (size_t j = i; j > leftBorder && array[j - 1] > array[j]; --j)
			{
				swap(array, j - 1, j);
			}
		}
}


void smartQSort(int* const array, const size_t leftBorder, const size_t rightBorder)
{
	if (rightBorder - leftBorder <= 1) 
	{
		return;
	}

	if (rightBorder - leftBorder <= 10)
	{
		insertionSort(array, leftBorder, rightBorder);
		return;
	}
	
	size_t leftIndex = leftBorder;
    size_t rightIndex = rightBorder - 1;
	int pivot = array[(leftBorder + rightBorder) / 2];

    while (leftIndex < rightIndex)
    {
        while (array[leftIndex] < pivot && leftIndex != rightBorder - 1)
        {
            ++leftIndex;
        }
        while (array[rightIndex] >= pivot && rightIndex != leftBorder)
        {
            --rightIndex;
        }
        swap(array, rightIndex, leftIndex);
    }
    swap(array, leftIndex, rightIndex);
	smartQSort(array, leftBorder, leftIndex);
	smartQSort(array, leftIndex, rightBorder);
}



int run(int argc, char *argv[]) 
{
    srand(time(NULL));
    int* arr = calloc(ARRAY_SIZE, sizeof(int));
    if (!arr) {
        printf("Memory allocation error!\n");
        free(arr);
		return 0;
    }
    generateRandomArray(arr, ARRAY_SIZE);

    float start = clock();
    smartQSort(arr, 0, ARRAY_SIZE);
    float end = clock();

    printf("\nTime to sort: %f\n", (end - start) / CLOCKS_PER_SEC);
    free(arr);
    
    printf("Press any key to exit...");
    getch();
    return 0;
}
