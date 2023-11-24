#include "stack.h"
void push(stack** head, char value) 
{
    stack* buf = malloc(sizeof(stack));
    if (buf == NULL) {
        printf("Error: memory allocation failed.\n");
        return;
    }
    buf->next = *head;
    buf->value = value;
    *head = buf;
}

void pop(stack** head) 
{
    if (head == NULL) {
        return;
    }
    stack* buf = *head;
    *head = (*head)->next;
    free(buf);
}

char topValue(stack* head)
{
    if (head == NULL) {
        return '\0';
    }
    return head->value;
}

void clearStack(stack** head)
{
    while (*head != NULL)
    {
        stack* trash = *head;
        *head = (*head)->next;
        free(trash);
    }
}