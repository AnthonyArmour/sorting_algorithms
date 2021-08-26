#include "sort.h"
/**
 * selection_sort - sorts an array of integers using selection sort
 * @array: the array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y;
	int min, swp;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}
		if (min != (int)x)
		{
			swp = array[x];
			array[x] = array[min];
			array[min] = swp;
			print_array(array, size);
		}
	}
}
