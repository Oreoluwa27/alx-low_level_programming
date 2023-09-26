#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns length of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
