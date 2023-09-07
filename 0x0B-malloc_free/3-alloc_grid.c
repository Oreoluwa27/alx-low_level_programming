#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int i, j, *grid;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}



