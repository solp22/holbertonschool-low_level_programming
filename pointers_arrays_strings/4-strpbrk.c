#include "main.h"

/**
 * _strpbrk - searches a string fro any set of bytes
 *
 * @s: string
 * @accept: another string
 *
 * Return Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
