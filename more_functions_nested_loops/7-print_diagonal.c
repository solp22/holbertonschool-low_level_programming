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
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= i; x++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	_putchar('\n');
}
