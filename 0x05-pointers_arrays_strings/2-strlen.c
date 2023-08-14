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

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] != ' ')
		{
			count++;
		}
	}

	return (count);
}
