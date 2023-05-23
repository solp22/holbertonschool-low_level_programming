#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: pointer to array
 * @low: first element of array
 * @high: last element of array
*/
void print_array(int *array, size_t low, size_t high)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array using binary search
 * @array: pointer to the first elemento of array to search in
 * @size: number of elements in array
 * @value: value to search for
*/
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0;
	size_t low;
	size_t high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		middle = (low + high) / 2;

		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}
