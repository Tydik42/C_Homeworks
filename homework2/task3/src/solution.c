#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include "solution.h"
#define MIN_RAND    0
#define MAX_RAND    100000


/*Написать сортировки пузырьком и подсчётом. С помощью функции clock() из time.h 
 *сравнить времена их работы на массиве из 100000 элементов.*/

void generateRandomArray(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        arr[i] = (rand() % (MAX_RAND - MIN_RAND + 1)) + MIN_RAND;
    }
}

int findMax(int array[], int length) {
    int max = array[0]; 
    
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }  
    return max;
}

void swap(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void bubbleSort(int array[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array, j, j + 1);
            }
        }
    }
}

void countingSort(int* array, int len) {
    int max = findMax(array, len);
    int* countingArray = calloc(max + 1, sizeof(*array));

    for (int i = 0; i < len; ++i) {
        ++countingArray[array[i]];
    }
        
    int index = 0;
    for (int i = 0; i < max + 1; ++i){
        for (int j = 0; j < countingArray[i]; ++j) {
            array[index++] = i;
        }
    }

    free(countingArray);
 }



int run() {
    int n = 100000;
    int* arrBubble = calloc(n, sizeof(int));
    int* arrCounting = calloc(n, sizeof(int));
    generateRandomArray(arrBubble, n);
    memmove(arrCounting, arrBubble, n);
    
    float startBubble = clock();
    bubbleSort(arrBubble, n);
    float endBubble = clock();
    
    float startCounting = clock();
    countingSort(arrCounting, n);
    float endCounting = clock();
    
    printf("Bubble sort time: %f\n Counting sort time %f\n", (endBubble - startBubble) / CLOCKS_PER_SEC, (endCounting - startCounting) / CLOCKS_PER_SEC);
    free(arrCounting);
    free(arrBubble);
    printf("Press any key to exit...");
    getch();
    return 0;
}