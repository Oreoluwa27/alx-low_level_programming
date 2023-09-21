#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count element in a list
 *
 * @h: start of the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;

	node_count++;
	}

	return (node_count);
}
