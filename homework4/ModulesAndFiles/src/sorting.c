#include "sorting.h"
#include "solution.h"


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