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

	for (x = 0; x <= 23; x++)
	{
		x = x / 10;
		y = x % 10;
		_putchar (x);
		_putchar (y);
	}
	_putchar(':');
	for (x = 0; x <= 59; x++)
	{
		x = x / 10;
		y = x % 10;
		_putchar (x);
		_putchar (y);
	}
}
