#include "main.h"
/**
 * _strlen - return the length of a string
 * Owned By Bwave
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int i, count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != ' ')
		{
			count++;
		}
	}

	return (count);
}
