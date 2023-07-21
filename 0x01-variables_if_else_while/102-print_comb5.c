#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}

			if (i <= 9)
			{
				putchar('0' + i);
			}
			
			putchar('0' + i);
			putchar(' ');

			if (j <= 9)
			{
				putchar('0' + j);
			}

			putchar('0' + j);

			if (i == 98 && j == 99)
			{
				break;
			}
			putchar(',');
                }
        }

        putchar('\n');

        return (0);
}
