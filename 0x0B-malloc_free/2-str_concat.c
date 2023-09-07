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
	int len1 = 0, len2 = 0, total, i = 0, j = 0;

	if (s1 != NULL) 
	{
		while(s1[i])
		{
			len1++;
			i++;
		}
	}

	if (s2 != NULL)
	{
		while(s2[j])
		{
			len2++;
			j++;
		}
	}
	total = len1 + len2;

	s = malloc((total + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; j++,i++)
	{
		s[i] = s2[j];
	}

	s[total] = '\0';
	

	return (s);
	
}



