#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints element of linked list
 *
 * @h: start of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	const list_t *temp = h;

	while (temp != NULL)
	{

		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
		}
		temp = temp->next;

		node_count++;
	}

	return (node_count);
}
