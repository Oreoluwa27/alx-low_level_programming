#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node to end of a list
 * @head: pointer to pointer
 * @n: integer value
 *
 * Return: Null or address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new_node;
	}
	return (new_node);
}
			

