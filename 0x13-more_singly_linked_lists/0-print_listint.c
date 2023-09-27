#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints element of the linked list
 * @h: pointer to the first element of the linked list
 *
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	if (h == NULL)
	{
		return (node_counter);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
