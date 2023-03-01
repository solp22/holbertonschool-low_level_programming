#include "main.h"

/**
 * _strncat - concatenates n char from string
 *
 * @n: num
 * @dest: destiny
 * @src: source
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (x = 0; (src[x] != '\0' && x < n); i++, x++)
	{
		dest[i] = src[x];
	}
	return (dest);
}
