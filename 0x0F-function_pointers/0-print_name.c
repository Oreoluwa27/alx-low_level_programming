#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: funtion name
 *
 * Return: N/A
 */

void print_name(char *name, void (*f)(char*))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
