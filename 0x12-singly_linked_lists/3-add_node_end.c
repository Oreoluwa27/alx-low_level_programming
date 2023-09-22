#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add node to end linked list
 * @head: pointer to pointer that points to start of a list
 *
 * Return: NULL for failure or address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *tmp;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}
