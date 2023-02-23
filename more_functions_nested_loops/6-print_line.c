#include "main.h"

/**
 * print_line - check the code
 *
 * @n: numbers
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
	}
	_putchar('\n');
}
