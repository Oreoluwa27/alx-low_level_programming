#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates array
 * @size: size of array
 * @c: charater
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size < 1)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}



