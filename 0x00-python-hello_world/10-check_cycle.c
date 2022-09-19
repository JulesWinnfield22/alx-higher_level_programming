#include "lists.h"
#include <stdio.h>
/**
 * check_cycle - check if the list is cyclic
 * @list: the list
 *
 * Return: 1 if it is else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *next;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (0);

	next = malloc(sizeof(listint_t));
	if (!next)
		return (0);

	current = list;
	next = list->next;

	while (next)
	{
		if (current == next)
			return (1);
		next = next->next;
	}

	free(current);
	free(next);
	return (0);
}
