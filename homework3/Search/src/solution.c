#include "solution.h"

/*Получить с клавиатуры два числа, n и k, сгенерировать случайно массив из n чисел, 
 *сгенерировать k случайных целых чисел, для каждого из них проверить, содержится ли оно в массиве. 
*Надо придумать алгоритм с временной сложностью O(n log n + k log n), или лучший.*/

void generateRandomArray(int arr[], int len) 
{
    for (int i = 0; i < len; ++i) {
        arr[i] = MIN_RAND + rand() % (MAX_RAND + 1 - MIN_RAND);
    }
}

int isSorted(int arr[], int len) {
    for(int i = 0; i < len - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}


void swap(int arr[], int num1, int num2) 
{
    int temp = arr[num1];
    arr[num1] = arr[num2];
    arr[num2] = temp;
}

void insertionSort(int* const array, const size_t leftBorder, const size_t rightBorder)
{
	for (size_t i = leftBorder + 1; i < rightBorder; ++i)
		{
			for (size_t j = i; j > leftBorder && array[j - 1] > array[j]; --j)
			{
				swap(array, j - 1, j);
			}
		}
}


void smartQSort(int* const array, const size_t leftBorder, const size_t rightBorder)
{
	if (rightBorder - leftBorder <= 1) 
	{
		return;
	}
	if (rightBorder - leftBorder <= 10)
	{
		insertionSort(array, leftBorder, rightBorder);
		return;
	}
	
	size_t leftIndex = leftBorder;
    size_t rightIndex = rightBorder - 1;
	int pivot = array[(leftBorder + rightBorder) / 2];

    while (leftIndex < rightIndex)
    {
        while (array[leftIndex] < pivot && leftIndex != rightBorder - 1)
        {
            ++leftIndex;
        }
        while (array[rightIndex] >= pivot && rightIndex != leftBorder)
        {
            --rightIndex;
        }
        swap(array, rightIndex, leftIndex);
    }
    swap(array, leftIndex, rightIndex);
	smartQSort(array, leftBorder, leftIndex);
	smartQSort(array, leftIndex, rightBorder);
}


int binarySearch(const int* array, const int number, const size_t arraySize)
{
    size_t leftBorder = 0;
    size_t rightBorder = arraySize;
    if (arraySize == 0)
    {
        return 0;
    }

    while (leftBorder + 1 < rightBorder)
    {
        size_t middle = (leftBorder + rightBorder) / 2;
        if (array[middle] > number)
        {
            rightBorder = middle;
        }
        else
        {
            leftBorder = middle;
        }
    }
    return array[leftBorder] == number;
}

int readPositiveInt() {
    int num;
    char c;

    while (scanf("%d%c", &num, &c) != 2 || !isspace(c) || num < 0) {
        printf("Input error. Please enter a non-negative integer: ");
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return num;
}


int run(int argc, char *argv[]) 
{
    size_t arraySize;
    size_t numberOfRand;
    srand(time(NULL));
    printf("Enter array size: ");
    arraySize = readPositiveInt();
    printf("Enter number of random elements: ");
    numberOfRand = readPositiveInt();

    int* array = calloc(arraySize, sizeof(int));
    if (!array) {
        printf("Memory allocation error!\n");
        free(array);
		return 0;
    }
    int* arrayOfRand = calloc(numberOfRand, sizeof(int));
    if (!arrayOfRand) {
        printf("Memory allocation error!\n");
        free(arrayOfRand);
		return 0;
    }

    generateRandomArray(array, arraySize);
    generateRandomArray(arrayOfRand, numberOfRand);
    
    printf("Your array: ");
    for (size_t i = 0; i < arraySize; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Random numbers: ");
    for (size_t i = 0; i < numberOfRand; ++i)
    {
        printf("%d ", arrayOfRand[i]);
    }
    printf("\n\n");

    smartQSort(array, 0, arraySize);

    for (size_t i = 0; i < numberOfRand; ++i)
    {
        printf("Element %d is%s in array \n", arrayOfRand[i], binarySearch(array, arrayOfRand[i], arraySize) ? "" : " not");
    }    

    free(array);
    free(arrayOfRand);
    
    printf("Press any key to exit...");
    getch();
    return 0;
}
