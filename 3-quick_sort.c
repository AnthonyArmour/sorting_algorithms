#include "sort.h"
/**
 * swp - swps two integers within an array
 * @a: x position
 * @b: y position
 * Return: void
 */
void swp(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * Lomuto - Lomuto partition scheme
 * @arr: array
 * @lo: lowest index
 * @hi: highest index
 * @size: size of original arr
 * Return: index
 */
int Lomuto(int *arr, int lo, int hi, size_t size)
{
	int pivot = arr[hi];
	int i = lo - 1;
	int j;

	for (j = lo; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swp(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	swp(&arr[i + 1], &arr[hi]);
	if ((i + 1) != hi)
		print_array(arr, size);

	return (i + 1);
}
/**
 * recurse_sort - recursive function to perform the sorting
 * @arr: array to sort
 * @lo: loweset index
 * @hi: highest index
 * @size: size of original arr
 * Return: void
 */
void recurse_sort(int *arr, int lo, int hi, size_t size)
{
	if (lo >= 0 && hi >= 0)
	{
		if (lo < hi)
		{
			int p = Lomuto(arr, lo, hi, size);

			recurse_sort(arr, lo, p - 1, size);
			recurse_sort(arr, p + 1, hi, size);
		}
	}
}
/**
 * quick_sort - sorts an array using
 * the quick sort algorithm.
 *
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		recurse_sort(array, 0, size - 1, size);
}
