#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add node to linked list
 * @head: pointer to pointer that points to start of a list
 *
 * Return: NULL for failure or address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[count])
	{
		count++;
	}

	new_node->len = count;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
