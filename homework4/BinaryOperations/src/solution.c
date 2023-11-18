#include "solution.h"


/*Ввести два числа, перевести в двоичное представление в дополнительном коде и напечатать, сложить в столбик 
 *в двоичном представлении, вывести сумму, перевести в десятичное, вывести сумму в десятичном виде. .*/


void printBinary(const char* const binary, const size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void fromIntToBinary(int number, char* const binary, const size_t size)
{
    int bit = 1;
    for (int i = size - 1; i >= 0; --i)
    {
        binary[i] = (number & bit) ? 1 : 0;
        bit <<= 1;
    }
}

int fromBinaryToInt(char* const binary, const size_t size)
{
    int decimalNumber = 0;
    int power = 1;
    for (int i = size - 1; i >= 0; --i)
    {
        decimalNumber += binary[i] * power;
        power *= 2;
    }
    return decimalNumber;
}

char* binarySum(const char* const firstBinaryNumber, const char* const secondBinaryNumber, const size_t size)
{
    char* const sumResult = (char*)calloc(size, sizeof(char));
    int transferBit = 0;
    int extraSum = 0;
    for (int i = size - 1; i >= 0; --i)
    {
        extraSum = firstBinaryNumber[i] + secondBinaryNumber[i] + transferBit;
        sumResult[i] = extraSum & 1;
        transferBit = extraSum >> 1;
    }
    return sumResult;
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
    printf("Enter 2 numbers: ");
    *num1 = read_int();
    *num2 = read_int();
}


int run(int argc, char *argv[]) 
{
    int num1, num2;
    char* binary1 = (char*)calloc(NUMBER_SIZE, sizeof(char));
    char* binary2 = (char*)calloc(NUMBER_SIZE, sizeof(char));

    read_two_ints(&num1, &num2);
    fromIntToBinary(num1, binary1, NUMBER_SIZE);
    fromIntToBinary(num2, binary2, NUMBER_SIZE);
    
    printf("Binary representation of %d: ", num1);
    printBinary(binary1, NUMBER_SIZE);

    printf("Binary representation of %d: ", num2);
    printBinary(binary2, NUMBER_SIZE);

    char* const sum = binarySum(binary1, binary2, NUMBER_SIZE);
    printf("Binary sum: ");
    printBinary(sum, NUMBER_SIZE);

    printf("Sum in decimal: %d\n", fromBinaryToInt(sum, NUMBER_SIZE));

    free(binary1);
    free(binary2);
    free(sum);

    printf("Press any key to exit...");
    getch();
    return 0;
}
