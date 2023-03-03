#include "main.h"

/**
 * _memcpy - copies memory
 *
 * @dest: dest string
 * @src: source
 * @n: input
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
