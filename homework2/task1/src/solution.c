#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include "solution.h"


/*Реализовать вычисление чисел Фибоначчи рекурсивно, реализовать итеративно, выяснить, 
 *с какого номера числа Фибоначчи рекурсивный вариант заметно медленнее итеративного.*/

int recursiveFibonacciCounter(int num) {
    if (num < 0) {
        return -1; //error
    }
    if (num == 0) {
        return 0;
    }
    else if (num <= 2) {
        return 1;
    }
    return recursiveFibonacciCounter(num - 1) + recursiveFibonacciCounter(num - 2);
    
}

int iterativeFibonacciCounter(int num) {
    if (num < 0) {
        return -1; //error
    }
    if (num == 0) {
        return 0;
    }
    else if (num <= 2) {
        return 1;
    }
    int firstNumber = 0;
    int secondNumber = 1;
    int thirdNumber = 1;
    for (int i = 2; i < num; ++i) {
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = secondNumber + firstNumber;
    }
    return thirdNumber;
}

double timeUsedRec(int num) {
    clock_t startRec, endRec;
    startRec = clock();
    int res = recursiveFibonacciCounter(num);
    endRec = clock();

    if (res == -1) {
        return -1.0;
    }
    
    return ((double) (endRec - startRec)) / CLOCKS_PER_SEC;
}

double timeUsedIter(int num) {
    clock_t startIter, endIter;
    startIter = clock();
    int res = iterativeFibonacciCounter(num);
    endIter = clock();
    
    if (res == -1) {
        return -1.0;
    }

    return ((double) (endIter - startIter)) / CLOCKS_PER_SEC;
}


int run() {
    int result;
    int num = 0;
    double timeRec = timeUsedRec(num);
    if (timeRec == -1.0) {
        printf("Error: n must be positive\n");
        return 0;
    }
    double timeIter = timeUsedIter(num);


    while (timeRec - timeIter < 2.5) 
    {
        ++num;
        timeRec = timeUsedRec(num);
        timeIter = timeUsedIter(num);
        printf("current number: %d difference in time: %lf\n", num, timeRec - timeIter);    
    }
    
    printf("The first number of Fibonacci sequence, which recursive algorithm is slower than iterative is %d\n", num);
    printf("Press any key to exit...");
    getch();
    return 0;
}