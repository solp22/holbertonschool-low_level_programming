#include "main.h"

/**
 * print_last_digit - check the code.
 *
 * @a: number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int a)
{
	a = a % 10;
	if (a > 0)
	{
		_putchar (a + '0');
		return (a);
	}
	else
	{
		a = a * -1;
		_putchar (a + '0');
		return (a);
	}
}
