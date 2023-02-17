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
		_putchar (x);
		_putchar (y);
		_putchar(':');
		for (a = 0; a <= 59; x++)
		{
			a = a / 10;
			b = a % 10;
			_putchar (a);
			_putchar (b);
		}
	}
}
