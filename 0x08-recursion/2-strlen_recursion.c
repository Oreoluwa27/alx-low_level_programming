#include "main.h"

/**
 * _strlen_recursion - returns the length of string 
 * @s: pointer to string 
 * Return: length 
 */

int _strlen_recursion(char *s)
{

	int count = 0;
	if (*s == '\0')
	{
		return (count);
	}

	else
	{
		count++;
		count = count + _strlen_recursion(s + 1);
		return (count);
	}
}
