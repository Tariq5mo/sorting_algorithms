#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t current, next;
	int temp;
	size_t totalElements = size;

	if (array == NULL || totalElements < 2)
		return;

	for (current = 0; current < totalElements - 1; current = 0, totalElements--)
	{
		for (; current < totalElements - 1; current++)
		{
			next = current + 1;
			if (array[current] > array[next])
			{
				temp = array[current];
				array[current] = array[next];
				array[next] = temp;
				print_array(array, size);
			}
		}
	}
}
