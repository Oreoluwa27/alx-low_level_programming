#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	int fact = n;

	if (n == 0)
	{
		return (1);
	}

	else
	{	
		fact = fact * factorial(n - 1);

		return (fact);
	}
}

