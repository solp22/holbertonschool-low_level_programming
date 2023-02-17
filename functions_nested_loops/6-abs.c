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
		return (x);
	}
	else
	{
		return (x);
	}
	return (0);
}
