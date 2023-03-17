#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array
 * @min: min value of array
 * @max: max value of array
 * Return: Always 0 (Return)
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (max - min); i++)
		{
			array[i] = min + i;
			min++;
		}
	}
	return (array);
}
