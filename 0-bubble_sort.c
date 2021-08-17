#include "sort.h"
/**
 * swap - swaps 2 elements
 * @xp: pointer
 * @yp: pointer
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - uses bubble sort alg to sort array
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array)
	{
		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < (size - i - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}

			}
		}
	}
}
