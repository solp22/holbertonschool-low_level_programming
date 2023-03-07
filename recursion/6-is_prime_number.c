#include "main.h"

/**
 * _prime - calculate if prime number
 * @n: number
 * @i: input
 * Return: Always 0 (Success)
 */

int _prime(int i, int n)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	return (_prime(i + 1, n));
}

/**
 * is_prime_number - determines if n is a prime number
 * @n: number
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		return (_prime(2, n));
	}
}
