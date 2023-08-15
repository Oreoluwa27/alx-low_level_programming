#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, len = 0, index;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	for (index = len; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
