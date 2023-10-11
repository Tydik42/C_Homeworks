#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"


/*
 * Заданы две строки: S и S1 . Найдите количество вхождений S1 в S как подстроки.
 */

void swap(int arr[], int num1, int num2) {
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void swapArraySlice(int arr[], int start, int end) {
    end--;
    while (start < (start + end + 1) / 2)
    {
        swap(arr, start++, end--);       
    }
    
}

int read_int() {
    int num;
    char c;
    while (scanf("%d%c", &num, &c) != 2 || !isspace(c)) {
        printf("Input error. Please enter an integer: ");
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return num;
}

void read_array(int arr[], int length) {
    int i;
    char c;
    for (i = 0; i < length; i++) {
        printf("Enter element %d: ", i);
        arr[i] = read_int();
    }
}


int run() {
    printf("Enter length of the first subarray: ");
    int len_first_subarr = read_int();
    printf("Enter length of the second subarray: ");
    int len_second_subarr = read_int();
    
    int *array = (int*)calloc(len_first_subarr + len_second_subarr, sizeof(int));
    
    printf("Enter array: \n");
    read_array(array, len_first_subarr + len_second_subarr);

    printf("Your array: ");
    for (int i = 0; i < len_first_subarr + len_second_subarr; i++) {
        printf("%d ", array[i]);
    }
    putchar('\n');

    swapArraySlice(array, 0, len_first_subarr);
    swapArraySlice(array, len_first_subarr, len_second_subarr + len_first_subarr);
    swapArraySlice(array, 0, len_second_subarr + len_first_subarr);

    printf("Array with swaped first m elements and last n elements: ");
    for (int i = 0; i < len_first_subarr + len_second_subarr; i++) {
        printf("%d ", array[i]);
    }
    
    putchar('\n');
    free(array);
    printf("Press any key to exit...");
    getch();
    return 0;
}