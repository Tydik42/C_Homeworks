#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    char value;
    struct stack *next;
} stack;

void push(stack** head, char value);

void pop(stack** head);

char topValue(stack* head);

void clearStack(stack** head);