#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "solution.h"

/*Поменять значения двух целочисленных переменных местами (без привлечения третьей переменной и файлов)
*/

int countZeros(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}


int processInputArray() {
    int* array = malloc(0);
    if (array == NULL) {
        printf("Error: memory could not be allocated");
        return -1;
    }
    int len = 0;

    while (1) {
        int number;
        printf("Please enter int array element (enter any char to stop): ");
        if (scanf("%d", &number) != 1) {
            while (getchar() != '\n') {}
            break;
        }

        array = realloc(array, sizeof(int) * (len + 1));
        if (array == NULL) {
            printf("Error: memory could not be allocated");
            return -1;
        }
        array[len++] = number;
    }

    int count = countZeros(array, len);
    printf("Number of zeros in array: %d", count);
    free(array);
    printf("\nPress any key to exit...");
    getch();
    return 0;
}