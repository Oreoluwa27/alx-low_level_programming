#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to string copy
 */

char *_strdup(char *str)
{
	char *s;
	int i, j, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}


	s = malloc(i * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		s[j] = str[j];
	}
	s[len] = '\0';

	return (s);
}
