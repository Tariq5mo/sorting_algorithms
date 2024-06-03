#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm.
 *
 * @array: The array.
 * @size: The size of it.
*/

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_sort_algorithm(array, size, 0, size - 1);
}
/**
 * quick_sort_algorithm - Recursion function for Quick sort.
 *
 * @array: The array.
 * @size: The size of it.
 * @min: The min index.
 * @max: The max index.
*/
void quick_sort_algorithm(int *array, size_t size, int min, int max)
{
	int pivot;

	if (min >= max || max < 0)
		return;
	pivot = lomuto_partition(array, size, min, max);
	quick_sort_algorithm(array, size, min, pivot - 1);
	quick_sort_algorithm(array, size, pivot + 1, max);
}
/**
 * lomuto_partition - Implement the lomuto partition in quick_sort_algorithm.
 * @array: The array.
 * @size: The size of it.
 * @min: The min index.
 * @max: The max index.
 * Return: the index of pivot.
*/
size_t lomuto_partition(int *array, size_t size, size_t min, size_t max)
{
	size_t i, j;
	int pivot;

	pivot = array[max];
	for (i = j = min; j < max; j++)
	{
		if (array[j] < pivot)
		{
			swap_two_elements(array, size, &array[j], &array[i++]);
		}
	}
	swap_two_elements(array, size, &array[i], &array[max]);
	return (i);
}
/**
 * swap_two_elements - swap between two different integer.
 *
 * @array: The array.
 * @size: The size of it.
 * @first: The first integer which will be the second.
 * @second: The second integer which will be the first.
*/
void swap_two_elements(int *array, size_t size, int *first, int *second)
{
	(void)(array);
	(void)(size);
	if (*first != *second)
	{
		*first = *first + *second;
		*second = *first - *second;
		*first = *first - *second;
		print_array((const int *)array, size);
	}
}
