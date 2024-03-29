#include "search_algos.h"
/**
 * linear_search - searches for value in an array using linear search
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index or -1 in case of failure
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
