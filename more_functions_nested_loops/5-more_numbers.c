#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x + '0');
		}
	_putchar('\n');
	}
}
