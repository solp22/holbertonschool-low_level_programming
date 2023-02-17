#include "main.h"

/**
 * _abs - check the code.
 *
 * @x: number
 *
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		_putchar (x);
	}
	else
	{
		_putchar (x);
	}
	return (0);
}
