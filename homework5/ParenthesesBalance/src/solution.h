#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "../../stack/src/stack.h"

int checkCorrect(const char* string, stack* parenthesis);

char* inputString();

int run(int argc, char *argv[]);

