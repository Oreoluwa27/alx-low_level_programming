#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}

			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}