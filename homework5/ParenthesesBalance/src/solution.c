#include "solution.h"


/*Напишите алгоритм проверки баланса скобок в исходной строке*/
/*Входные данные: строка, состоящая из символов (, ), [, ], {, }*/

char* inputString() {
    int INITIAL_SIZE = 2, i = 0;
    char *string = (char *)calloc(sizeof(char), INITIAL_SIZE), c;
    if (string == NULL) {
        printf("Error: memory allocation failed.\n");
        return NULL;
    }
    while((c = getchar()) != '\n' && c != EOF) {
        if (i == INITIAL_SIZE) {
            INITIAL_SIZE += 2;
            char *temp = (char *)realloc(string, sizeof(char) * INITIAL_SIZE);
            if (temp == NULL) {
                printf("Error: memory reallocation failed.\n");
                free(string);
                return NULL;
            }
            string = temp;
        }
        string[i++] = c;
    }
    string[i] = '\0';
    return string;
}


int checkCorrect(const char* string, stack* parenthesis) {
    for (size_t i = 0; i != strlen(string); ++i) {
        if (string[i] == '(' ||  string[i] == '[' || string[i] == '{') {
            push(&parenthesis, string[i]);
        }
        else {
            if (parenthesis == NULL) {
                return 0;
            }
            char c = parenthesis->value;
            if ((string[i] == ')' && c == '(') ||  (string[i] == ']' && c == '[') || (string[i] == '}' && c == '{')) {
                pop(&parenthesis);
            }
            else {
                return 0;
            }
        }
    }
    int ans = (parenthesis == NULL && *string != '\0') ? 1 : 0;
    return ans;
}


int run(int argc, char *argv[]) {
    stack* parenthesis = NULL;
    printf("Enter the string: ");
    char* string = inputString();
    printf("Your input: %s\n", string);
    printf("Parenthesis sequence %s\n", checkCorrect(string, parenthesis) ? "correct" : "not correct");
    free(string);
    clearStack(&parenthesis);
    printf("Press any key to exit...");
    getch();
    return 0;
}