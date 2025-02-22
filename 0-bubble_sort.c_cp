#include "sort.h"

/**
 * bubble_sort - Function sorts arrays by bubble sort algorithm.
 *
 * @array: The array expected to be sorted.
 * @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, bub, flag;
	int temp;

	if (!array || size < 2)
		return;
	for (bub = 0; bub < size - 1; bub++)
	{
		for (i = 0, j = 1; i < size - bub - 1; i++, j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				flag++;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}
