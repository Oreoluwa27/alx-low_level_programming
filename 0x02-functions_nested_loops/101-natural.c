#include <stdio.h>

/**
 *
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int i, a, b, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;

		if (a == 0 || b == 0)
		{
			if (a == 0)
			{
				sum = sum + a;
			}
			else
			{
				sum = sum + b;
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
