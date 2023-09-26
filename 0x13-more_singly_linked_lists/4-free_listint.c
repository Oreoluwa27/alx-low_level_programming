#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to head of a list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
		head = head->next;
		free_listint(head);
	}
}
