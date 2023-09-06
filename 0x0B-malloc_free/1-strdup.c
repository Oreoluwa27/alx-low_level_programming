#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: string 
 * Return: pointer to string copy
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 1; i != '\0'; i++)
	{
		continue;
	}


	s = malloc(i * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		*(s + j) = *(str + j);
	}

	return (s);
}
