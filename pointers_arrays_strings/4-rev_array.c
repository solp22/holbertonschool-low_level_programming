#include "main.h"

/**
 * reverse_array- reverses an array
 *
 * @a: array
 * @n: number of elements
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}		
