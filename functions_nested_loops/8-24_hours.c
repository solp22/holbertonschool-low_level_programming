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
	int a;

	for (x = 0; x <= 23; x++)
	{
		for (a = 0; a <= 59; x++)
		{
			_putchar ((x / 10) + '0');
			_putchar ((x % 10) + '0');
			_putchar(':');
			_putchar ((a / 10) + '0');
			_putchar ((a % 10) + '0');
			_putchar ('\n');
		}
	}
}
