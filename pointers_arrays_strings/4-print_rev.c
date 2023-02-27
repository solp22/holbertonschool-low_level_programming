#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int x, i;

	for (x = 0; s[x]; x++)
	{
	}
	for (i = (x - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
