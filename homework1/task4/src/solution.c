#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"
#define MAX_TICKET  999999
#define LEN_OF_TICKET   6

/*Подсчитайте число «счастливых билетов» из шести цифр, всего существующих в мире 
 *(билет считается «счастливым», если сумма первых трёх цифр его номера равна сумме трёх последних*/

void intToArr(int arr[], int num) {
    for (int j = LEN_OF_TICKET - 1; j >=0; j--) {
        arr[j] = num % 10;
        num /= 10;
    }
}


int checker(int arr[]) {
    return arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5];
}


int calculateLuckyTickets() {
    int count = 0;
    for (int i = 0; i <= MAX_TICKET; i++) {
        int digits[LEN_OF_TICKET] = {0};
        intToArr(digits, i);
        if (checker(digits)) {
            count++;
        }
    }
    return count;
}


int run() {
    printf("The number of lucky tickets is %d\n", calculateLuckyTickets());
    printf("Press any key to exit...");
    getch();
    return 0;
}