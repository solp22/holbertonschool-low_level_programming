#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (*action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array != NULL)
				(*action)(array[i]);
		}
	}
}
