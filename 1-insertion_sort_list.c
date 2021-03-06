#include "sort.h"
/**
 * insertion_sort_list - sorts  a doubly linked list of integers
 * @list: the list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next = NULL;

	if (!list)
		return;
	current = *list;
	while (current && current->next)
	{
		next = current->next;
		if (current->n > next->n)
		{
			if (next->next)
				next->next->prev = current;
			next->prev = current->prev;
			if (current->prev)
				current->prev->next = next;
			else
				*list = next;
			current->prev = next;
			current->next = next->next;
			next->next = current;
			print_list(*list);
			current = *list;
		}
		else
			current = current->next;
	}
}
