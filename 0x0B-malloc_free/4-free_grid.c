#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: a 2 dimensional grid
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
