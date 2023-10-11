#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"

/*Поменять значения двух целочисленных переменных местами (без привлечения третьей переменной и файлов)
*/

void swap(int* num1, int* num2) {
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
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

void read_two_ints(int* num1, int* num2) {
    printf("Enter 2 numbers: ");
    *num1 = read_int();
    *num2 = read_int();
}


int run() {
    int num1, num2;
    read_two_ints(&num1, &num2);
    printf("Your input: %d and %d\n", num1, num2);
    swap(&num1, &num2);
    printf("Swapped: %d and %d\n", num1, num2);
    printf("Press any key to exit...");
    getch();
    return 0;
}