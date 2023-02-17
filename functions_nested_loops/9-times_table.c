#include "main.h"

/**
 * times_table - prints the time tables
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int p;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (p = 0; p <= 9; p++)
		{
			r = i * p;
			if ((r >= 10) && (r != 81))
			{
				_putchar ((r / 10) + '0');
				_putchar ((r % 10) + '0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				_putchar (r + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
