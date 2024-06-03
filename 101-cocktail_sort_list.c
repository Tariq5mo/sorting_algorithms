#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Cocktail shaker sort algorithm.
 * @list: Pointer to the list.
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *pi, *pj;
	int swapped;

	if (!list || !(*list) || !((*list)->next))
		return;
	do {
		swapped = 0;
		for (pi = *list; pi && pi->next;)
		{
			pj = pi->next;
			if (pi->n > pj->n)
			{
				pi = pi->prev;
				pj = pj->prev;
				swap(list, &pi, &pj);
				swapped += 1;
				print_list(*list);
			}
			if (pi && pi->next)
				pi = pi->next;
			else if (!pi)
				pi = pj;
		}
		if (swapped == 0)
			break;
		if (pi)
			pj = pi->prev;
		for (swapped = 0; pj && pj->prev; pj = pj->prev)
		{
			pi = pj->prev;
			if (pj->n < pi->n)
			{
				swap(list, &pj, &pi);
				swapped += 1;
				print_list(*list);
			}
		}
		if (swapped == 0)
			break;
	} while (1);
}
