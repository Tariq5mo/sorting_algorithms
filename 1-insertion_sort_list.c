#include "sort.h"

/**
 * insertion_sort_list - Sorts list of integers in ascending order,
 * using the Insertion sort algorithm.
 * @list: pointer to the head of the list.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *pi, *pj;
	int key;

	if (!list || !(*list) || !((*list)->next))
		return;
	for (pi = (*list)->next; pi; pi = pi->next)
	{
		key = pi->n;
		for (pj = pi->prev; pj; pj = pj->prev)
		{
			if (pj->n > key)
			{
				swap(list, &pi, &pj);
				print_list(*list);
			}
			else
				break;
		}
	}
}
/**
 * swap - Swap two element of doubly linked list.
 *
 * @list: pointer to the head of list.
 * @pi: pointer to pi.
 * @pj: pointer to pj.
*/
void swap(listint_t **list, listint_t **pi, listint_t **pj)
{
	listint_t *pt;

	pt = (*pj)->next->next;
	(*pj)->next->next = (*pj)->next->prev;
	(*pj)->next->prev = (*pj)->prev;
	(*pj)->prev = (*pj)->next;
	(*pj)->next = pt;
	if ((*pj)->next)
		(*pj)->next->prev = (*pj);
	if ((*pj)->prev->prev)
		(*pj)->prev->prev->next = (*pj)->prev;
	if ((*pj) == *list)
		*list = (*pj)->prev;
	if ((*pj)->prev == (*pi))
		(*pi) = (*pj);
	(*pj) = (*pj)->prev;
}
