#include "main.h"
/**
 * print_triangle - check code
 *
 * @size: number
 *
 * Return: Always 0 (Success)
 *
 */

void print_triangle(int size)
{
	int y;
	int x;
	int z;

	if (size >= 1)
	{
		for (y = 0; y < size; y++)
		{
			z = size - y;

			for (x = 1; x <= size; x++)
			{
				if (x >= z)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}

			_putchar ('\n');
		}
	}
	else
	_putchar('\n');
}
