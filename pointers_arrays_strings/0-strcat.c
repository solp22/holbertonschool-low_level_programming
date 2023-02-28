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

	for (x = 0; dest[x]; x++)
	{
	}

	for (i = 0; dest[x] != '\0'; i++)
	{
		dest[i + x] = src[i];
	}

	dest[i = x] = '\0';

	return (dest);
}
