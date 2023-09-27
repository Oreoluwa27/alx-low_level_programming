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
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);

		head = next;
	}
}
