#include "solution.h"
#include "sorting.h"


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


int run(int argc, char *argv[]) 
{
    size_t arraySize;    
    srand(time(NULL));
    
    FILE *file = fopen("src/input.txt", "r");
    if (!file) 
    {
        printf("File opening error!\n");
        return 0;
    }
    
    int tmp = 0;
    while (fscanf(file, "%d", &tmp) == 1)
    {
        ++arraySize;
    }
    fseek(file, 0, SEEK_SET);

    if (arraySize == 0)
    {
        printf("Incorrect data!\n");
        fclose(file);
        return 0;
    }
    int* array = (int*)calloc(arraySize, sizeof(int));
    if (!array) {
        printf("Memory allocation error!\n");
        fclose(file);
        free(array);
		return 0;
    }

    printf("Your array: ");
    int scanResult;
    for (size_t i = 0; i < arraySize; ++i)
    {
        scanResult = fscanf(file, "%d", &array[i]);
        if (scanResult != 1)
        {
            printf("Incorrect data!\n");
            fclose(file);
            free(array);
            return 0;
        }
        printf("%d ", array[i]);
    }
    fclose(file);
    printf("\n");

    smartQSort(array, 0, arraySize);
    printf("Most frequent element: %d\n", mostFrequentElement(array, arraySize));
    free(array);
    
    printf("Press any key to exit...");
    getch();
    return 0;
}
