#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D grid previously created by alloc_grid
 * @grid: previously created 2D grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

