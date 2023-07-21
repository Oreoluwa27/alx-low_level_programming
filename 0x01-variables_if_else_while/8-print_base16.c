#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, ch;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	for (ch = 'a'; i <= 'f'; i++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
