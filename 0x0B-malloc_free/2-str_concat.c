#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0, len2 = 0, total, i, j;

	if (s1 != NULL && s2 != NULL)
	{
		while(*s1)
		{
			len1++;
			s1++;
		}

		while(*s2)
		{
			len2++;
			s2++;
		}
	}
	total = len1 + len2;

	s = malloc((total * sizeof(char)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(s + i) = *(s1 + i);
	}

	for (j = 0; j < len2; j++, i++)
	{
		*(s + i) = *(s2 + j);
	}

	*(s + total) = '\0';
	

	return (s);
	
}



