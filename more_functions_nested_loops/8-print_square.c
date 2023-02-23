#include "main.h"
/**
 * print_square - check code
 *
 * @size: number
 *
 * Return: Always 0 (Success)
 *
 */

void print_square(int size)
{
	int i;
	int x;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar ('#');
			}
		_putchar ('\n');
		}

	}
	else
	_putchar('\n');
}
