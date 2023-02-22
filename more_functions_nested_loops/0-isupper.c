#include "main.h"

/**
 * _islower - check the code.
 *
 * @c: character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
