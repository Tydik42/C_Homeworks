#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include "solution.h"
#define MIN_RAND    0
#define MAX_RAND    100000


/*Написать программу, которая заполняет массив случайными значениями (с использованием функции rand из stdlib.h), 
 *потом преобразует его без использования дополнительных массивов так, что в начале массива будут элементы, меньшие первого, 
 *а в конце — большие либо равные первому. Программа должна работать за линейное время.*/

void generateRandomArray(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        arr[i] = (rand() % (MAX_RAND - MIN_RAND + 1)) + MIN_RAND;
    }
}


void swap(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void halfQSort(int* array, const int len)
{
    int firstElement = array[0];
    int leftIndex = 0;
    int rightIndex = len - 1;
    while (leftIndex < rightIndex)
    {
        while (array[leftIndex] < firstElement && leftIndex != len - 1)
        {
            ++leftIndex;
        }
        while (array[rightIndex] >= firstElement && rightIndex != 0)
        {
            --rightIndex;
        }
        swap(array, rightIndex, leftIndex);
    }
    swap(array, leftIndex, rightIndex);
}



int run() {
    srand(time(NULL));
    int n = 100;
    int* arr = calloc(n, sizeof(int));
    if (!arr) {
        printf("Memory allocation error!\n");
        return 0;
    }
    generateRandomArray(arr, n);
    printf("Array before sorting:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    float start = clock();
    halfQSort(arr, n);
    float end = clock();
    printf("\nArray after sorting:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nTime: %f\n", (end - start) / CLOCKS_PER_SEC);
    free(arr);
    
    printf("Press any key to exit...");
    getch();
    return 0;
}