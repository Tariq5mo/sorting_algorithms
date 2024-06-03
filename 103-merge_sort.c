#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int *sort(int *a, int size, int **arr, int first_idx)
{
	int i, k;
	static int *p, j = 1;

	if (j == 1)
	{
		p = malloc(sizeof(int) * size);
		for (i = 0; i < size; i++)
		{
			p[i] = a[i];
		}
		j++;
		return (p);
	}
	for (i = 0, k = first_idx; i < size; i++, k++)
	{
		p[k] = a[i];
	}
	k = first_idx;
	*arr = &p[k];
	return (*arr);
}

void sortlr(int *a, int size, int *l, int *r)
{
	int pa, pl, pr, mid;

	mid = size / 2;
	printf("Merging...\n");
	printf("[left]: %d", l[0]);
	for (pl = 1; pl < mid; pl++)
		printf(", %d", l[pl]);
	printf("\n");
	printf("[right]: %d", r[0]);
	for (pr = 1; pr < size - mid; pr++)
		printf(", %d", r[pr]);
	printf("\n");
	for (pa = pl = pr = 0; pa < size;)
	{
		if (pl < mid && (pr >= size - mid || l[pl] <= r[pr]))
		{
			a[pa] = l[pl];
			pa++;
			pl++;
		}
		else if (pr < size - mid && (pl >= mid || l[pl] > r[pr]))
		{
			a[pa] = r[pr];
			pa++;
			pr++;
		}
	}
	printf("[Done]: %d", a[0]);
	for (pa = 1; pa < size; pa++)
		printf(", %d", a[pa]);
	printf("\n");
}

/**
 * merge_sort_algorithm - implement merge sort.
 *
 * @a:The array
 * @size: size of array
 * Return: The array sorted.
*/
int *merge_sort_algorithm(int *a, int size)
{
	int mid, temp, *r, *l;

	if (size < 2)
		return (a);
	if (size < 3)
	{
		printf("Merging...\n");
		printf("[left]: %d\n", a[0]);
		printf("[right]: %d\n", a[1]);
		if (a[0] > a[1])
		{
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
		}
		printf("[Done]: %d, %d\n", a[0], a[1]);
		return (a);
	}
	mid = size / 2;
	sort(a, mid, &l, 0);
	sort(&a[mid], size - mid, &r, mid);
	merge_sort_algorithm(l, mid);
	merge_sort_algorithm(r, size - mid);
	sortlr(a, size, l, r);
	return (a);
}
/**
 * merge_sort - sorts an array of integers in ascending order
 * using the Merge sort algorithm.
 * @array: The array.
 * @size: The size.
*/
void merge_sort(int *array, size_t size)
{
	sort(array, size, NULL, 0);
	merge_sort_algorithm(array, size);
}
