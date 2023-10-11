#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "solution.h"


/*
 * Заданы две строки: S и S1 . Найдите количество вхождений S1 в S как подстроки.
 */

int count_occurrences(char *string, char *substring) {
    int count = 0;
    int len_string = strlen(string);
    int len_sub = strlen(substring);

    for (int i = 0; i <= len_string - len_sub; i++) {
        int j;
        for (j = 0; j < len_sub; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == len_sub) {
            count++;
        }
    }
    return count;
}


char* inputString() {
    int INITIAL_SIZE = 2, i = 0;
    char *string = (char *)calloc(sizeof(char), INITIAL_SIZE), c;
    while((c = getchar()) != '\n' && c != EOF) {
        if (i == INITIAL_SIZE) {
            INITIAL_SIZE += 2;
            string = (char *)realloc(string, sizeof(char) * INITIAL_SIZE);
        }
        string[i++] = c;
    }
    string[i] = '\0';
    return string;
}


int run() {
    printf("Enter the string: \n");
    char *string = inputString();
    printf("Enter the substring: \n");
    char *substring = inputString();
    printf("Number of occurrences: %d\n", count_occurrences(string, substring));
    free(string);
    free(substring);
    printf("Press any key to exit...");
    getch();
    return 0;
}