#include "main.h"

/**
 * _strcpy - copy string
 *
 * @dest: pointer
 * @src: source pointer
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
