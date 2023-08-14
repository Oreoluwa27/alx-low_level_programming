#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: N/A
 */

void print_triangle(int size)
{
	int i, j, k = 1;

	if (size > 0)
	{
		for(i = 1; i <= size; i++)
		{
			for(j = 1; j <= size - k; j++)
			{
				_putchar(' ');
			}
			for(j = 1; j <= k; j++)
			{
				_putchar('#');
			}
			k++;
			_putchar('\n');
		}
	}
	else 
	{
	_putchar('\n');
	}
}
