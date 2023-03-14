#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Always 0 (Success)
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
