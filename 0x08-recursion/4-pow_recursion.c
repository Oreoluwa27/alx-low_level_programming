#include "main.h"
/**
 * _pow_recursion - power
 * @x:int
 * @y:int
 * Return:int
 */

int _pow_recursion(int x, int y)
{
	int mul = 1;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		mul = mul * x;
		_pow_recursion(mul, y - 1);
		return (mul);
	}
}
