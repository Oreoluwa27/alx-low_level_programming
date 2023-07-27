#include <stdio.h>

/**
 * main - print first 50 of fibonacci sequence
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, a = 0, b = 1;
	long sum;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (i == 50)
		{
			printf("%ld\n", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
	}

	return (0);
}
