#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function that compares values
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (*cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array != NULL)
			{
				(*cmp)(array[i]);
				if ((*cmp)(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
