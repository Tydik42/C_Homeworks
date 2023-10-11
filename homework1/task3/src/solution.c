#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"

/*Написать алгоритм нахождения неполного частного от деления a на b (целые числа), 
 *используя только операции сложения, вычитания и умножения.*/

int findQuotient(int divisible, int divisor) {
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        return -1;
    }

    int quotient = 0;
    int sign = 1;

    if (divisible < 0) {
        sign = -sign;
        divisible = -divisible;
    }
    if (divisor < 0) {
        sign = -sign;
        divisor = -divisor;
    }

    while (divisible >= divisor) {
        divisible = divisible - divisor;
        quotient++;
    }

    return quotient * sign;
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

void read_divs(int* divisivle, int* divisor) {
    printf("Enter 2 numbers (divisivle and divisor): ");
    *divisivle = read_int();
    *divisor = read_int();
}


int run() {
    int divisible, divisor;
    read_divs(&divisible, &divisor);
    printf("Quotient: %d\n", findQuotient(divisible, divisor));
    printf("Press any key to exit...");
    getch();
    return 0;
}