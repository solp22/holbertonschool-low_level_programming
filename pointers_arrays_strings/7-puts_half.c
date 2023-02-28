#include "main.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int count, half, n;

	for (count = 0; str[count]; count++)
	{
	}
	if (count % 2 == 0)
	{
		half = count / 2;
		for (count = half; str[count]; count++)
			_putchar(str[count]);
	}
	else
	{
		n = (count - 1) / 2;
		for (count = n; str[count]; count++)
			_putchar(str[count]);
	}
	_putchar('\n');
}
