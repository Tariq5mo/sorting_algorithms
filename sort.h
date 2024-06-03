#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(listint_t **list, listint_t **pi, listint_t **pj);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_algorithm(int *array, size_t size, int min, int max);
size_t lomuto_partition(int *array, size_t min, size_t size, size_t max);
void swap_two_elements(int *array, size_t size, int *first, int *second);
void shell_sort(int *array, size_t size);
void swap_two_elements_forshell(int *array, size_t size,
int *first, int *second);
void cocktail_sort_list(listint_t **list);
int *merge_sort_algorithm(int *a, int size);
void sortlr(int *a, int size, int *l, int *r);
int *sort(int *a, int size, int **arr, int first_idx);
void merge_sort(int *array, size_t size);









#endif
