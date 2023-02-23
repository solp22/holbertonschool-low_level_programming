#include "main.h"
/**
 * print_diagonal - check code
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 *
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar ('\\');
			_putchar ('\n');
			for (x = 0; x <= n; x++)
				_putchar (' ');
		}
	}
	_putchar('\n');
}
