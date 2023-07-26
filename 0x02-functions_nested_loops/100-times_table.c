#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 1; j<= n; j++)
			{
				prod = i * j;

				_putchar(',');

				if (prod < 10)
				{	
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod < 100)
				{
					_putchar(' ');
				}

				_putchar(' ');

				if (prod > 99)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod < 100 && prod > 9)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
				

