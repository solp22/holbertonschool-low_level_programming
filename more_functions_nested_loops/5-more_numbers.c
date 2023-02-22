#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
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
