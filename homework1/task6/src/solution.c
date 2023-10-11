#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"


/*
 * Написать программу, печатающую все простые числа, не превосходящие заданного числа.
 */

void sieveOfEratosthenes(int n, bool* arr)
{
    for (int i = 0; i <= n; ++i) {
        arr[i] = true;
    }

    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (arr[i])
            for (int j = i * i; j <= n; j += i)
                arr[j] = false;
}


void printSieveOfEratosthenes(int n, const bool* arr)
{
    for (int i = 0; i <= n; ++i) {
        if (arr[i])
            printf("%d ", i);
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

int run() {
    printf("Enter the number: ");
    int n = read_int();
    bool* primes = calloc(n + 1, sizeof(bool));
    sieveOfEratosthenes(n, primes);
    printf("prime numbers not greater than entered number %d:\n", n);
    printSieveOfEratosthenes(n, primes);
    free(primes);
    printf("Press any key to exit...");
    getch();
    return 0;
}