#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	unsigned long fact = n;

	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		fact = fact * factorial(n - 1);

		return (fact);
	}
}

