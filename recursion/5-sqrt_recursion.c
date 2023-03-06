#include "main.h"

/**
 * _sqrt_recursion - return natural square root
 * @n: input
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(1, n));
	}
}

/**
 * _sqrt - calculate square root
 * @i: root
 * @n: number
 * Return: Always 0 (Success)
 */

int _sqrt(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) < n)
	{
		return (_sqrt(i + 1, n));
	}
	else
	{
		return (-1);
	}
}

