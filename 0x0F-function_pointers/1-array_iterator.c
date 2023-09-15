#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate over array
 * @array: array of integer
 * @size: size of array
 * @action: funtion to be used 
 *
 * Return: N/A
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
