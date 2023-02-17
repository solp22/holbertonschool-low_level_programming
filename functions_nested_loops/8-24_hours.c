#include "main.h"

/**
 * jack_bauer - check the code.
 *
 *
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int x;
	int y;
	int a;
	int b;

	for (x = 0; x <= 23; x++)
	{
		x = x / 10;
		y = x % 10;
		for (a = 0; a <= 59; x++)
		{
			_putchar (x + '0');
			_putchar (y + '0');
			_putchar(':');
			a = a / 10;
			b = a % 10;
			_putchar (a + '0');
			_putchar (b + '0');
			_putchar ('\n');
		}
	}
}
