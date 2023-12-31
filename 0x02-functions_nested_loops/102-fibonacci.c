#include <stdio.h>

/**
 * main - print first 50 of fibonacci sequence
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;
	unsigned long sum = 0, a = 0, b = 1;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (i == 50)
		{
			printf("%lu\n", sum);
		}
		else
		{
			printf("%lu, ", sum);
		}
	}

	return (0);
}
