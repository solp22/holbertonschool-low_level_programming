#include "main.h"

/**
 * _strncpy - copy n char froma string
 *
 * @dest: destiny
 * @src: source
 * @n: number
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
