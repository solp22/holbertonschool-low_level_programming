#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes a  grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **array, i, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
			{
				for (--i; i >= 0; --i)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
			for (x = 0; x < width; x++)
			{
				array[i][x] = 0;
			}
		}
	return (array);
	}
}
