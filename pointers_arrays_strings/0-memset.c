#include "main.h"

/**
 * _memset - fills n memory with char
 * @s: string
 * @b: char
 * @n: num
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
