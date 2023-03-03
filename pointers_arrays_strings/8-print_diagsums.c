#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: string
 * @size: size input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i + (i * size)];
		diag2 = diag2 + a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d,%d\n", diag1, diag2);
}
