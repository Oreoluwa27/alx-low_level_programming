#include <stdio.h>

/**
 * main - print first 50 of fibonacci sequence
 *
 * Return: 0 for success
 */

int main(void)
{
	int i, sum = 0, a = 0, b = 1;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		
		if (i == 50)
		{
			printf("%d\n", sum);
		}
		else 
		{
			printf("%d, ", sum);
		}
	}

	return (0);
}
