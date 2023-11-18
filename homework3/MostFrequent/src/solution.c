#include "solution.h"


/*Найти наиболее часто встречающийся элемент в массиве быстрее, чем за O(n^2). 
 *Если таких элементов несколько, надо вывести любой из них.*/

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


// only with sorted array
int mostFrequentElement(int* const array, const size_t len)
{
    if (len == 0)
    {
        return 0;
    }
    int maxCount = 1;
    int mostCommon = array[0];
    int count = 1;
    for (size_t i = 0; i < len; ++i)
    {
        if (array[i] == array[i + 1])
        {
            ++count;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                mostCommon = array[i];
            }
            count = 1;
        }
    }
    return mostCommon;
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
    srand(time(NULL));
    printf("Enter array size: ");
    arraySize = readPositiveInt();

    int* array = (int*)calloc(arraySize, sizeof(int));
    if (!array) {
        printf("Memory allocation error!\n");
        free(array);
		return 0;
    }
    generateRandomArray(array, arraySize);
    
    printf("Your array: ");
    for (size_t i = 0; i < arraySize; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    smartQSort(array, 0, arraySize);
    printf("Most frequent element: %d\n", mostFrequentElement(array, arraySize));
    free(array);
    
    printf("Press any key to exit...");
    getch();
    return 0;
}
