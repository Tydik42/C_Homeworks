#ifdef SOLUTION_H
#define SOLUTION_H

typedef struct stack;

int checkCorrect(const char* string, stack* parenthesis);

char* inputString();

stack* push(stack* front, char elem);

stack* pop(stack* front);

int run();

#endif // SOLUTION_H
