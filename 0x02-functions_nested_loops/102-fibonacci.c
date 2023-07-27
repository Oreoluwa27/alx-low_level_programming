#include <stdio.h>

/**
 * main - print first 50 of fibonacci sequence
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, a = 0, b = 1;
	long long sum;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (i == 50)
		{
			printf("%lld\n", sum);
		}
		else
		{
			printf("%lld, ", sum);
		}
	}

	return (0);
}
