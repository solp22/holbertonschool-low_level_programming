#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string
 * @src: another string
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; src[x] != '\0'; x++, i++)
	{
		dest[i] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
