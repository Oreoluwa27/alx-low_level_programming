#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - grid
 * @width: row
 * @height: column
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int i, x, j, **grid;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int*) * height);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * weight;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}



