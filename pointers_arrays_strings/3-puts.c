#include "main.h"

/**
 * _puts - prints line
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int x;

	for(x = 0; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}		
