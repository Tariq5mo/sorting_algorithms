#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence.
 * @array: The array.
 * @size: The size of it.
*/
void shell_sort(int *array, size_t size)
{
	int i, j, gap, size_array;

	/*Calculate the max gap*/
	for (gap = 1, size_array = (int)size; (gap * 3 + 1) <= size_array;)
	{
		gap = gap * 3 + 1;
	}
	for (i = 0, j = i + gap; j < size_array;)
	{
		if (array[j] < array[i])
			swap_two_elements_forshell(array, size_array, &array[j], &array[i]);
		for (j = i; j > 0 && j - gap >= 0; j = j -  gap)
		{
			if (array[j] < array[j - gap])
				swap_two_elements_forshell(array, size_array, &array[j], &array[j - gap]);
		}
		i++;
		j = i + gap;
		if (j == size_array)
		{
			gap = (gap - 1) / 3;
			i = 0;
			j = i + gap;
			print_array(array, size);
			if (gap <= 0)
				break;
		}
	}
}
/**
 * swap_two_elements_forshell - swap between two different integer.
 *
 * @array: The array.
 * @size: The size of it.
 * @first: The first integer which will be the second.
 * @second: The second integer which will be the first.
*/
void swap_two_elements_forshell(int *array, size_t size,
int *first, int *second)
{
	(void)(array);
	(void)(size);
	if (*first != *second)
	{
		*first = *first + *second;
		*second = *first - *second;
		*first = *first - *second;
	}
}
