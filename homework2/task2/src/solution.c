#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "solution.h"

/*Реализовать возведение в целую степень — в лоб (за линейное время) и за О(log n).*/

int linPow(int base, int power) {
    if (power < 0 || base < 0) {
        return -1;
    }
    if (base == 1 || base == 0) {
        return base;
    }
    
    if (power == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result *= base;
    }
    return result;
}


int binPow(int base, int power) {
    if (power < 0 || base < 0) {
        return -1;
    }
    if (base == 1 || base == 0) {
        return base;
    }
    if (power == 0) {
        return 1;
    }
    
    if (power % 2 == 1) {
        return base * binPow(base, power - 1);
    }
    int evenPowerBase = binPow(base, power / 2);
    return evenPowerBase * evenPowerBase;
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
    printf("Enter base and power: ");
    *num1 = read_int();
    *num2 = read_int();
}


int run() {
    int base, power;
    read_two_ints(&base, &power);
    printf("Your input: %d and %d\n", base, power);
    int result = binPow(base, power);
    
    if (result == -1) {
        printf("Error: base and power must be positive integers\n");
        return -1;
    } 
    printf("Result: %d\n", result);
    printf("Press any key to exit...");
    getch();
    return 0;
}