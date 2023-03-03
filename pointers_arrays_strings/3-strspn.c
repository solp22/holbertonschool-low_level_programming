#include "main.h"

/**
 * _strspn - check code
 *
 * @s: string
 * @accept: other string
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, temp;

	for (i = 0; s[i]; i++)
	{
		temp = 0;
		for (x = 0; accept[x]; x++)
		{
			if  (s[i] == accept[x])
			{
				temp = 1;
			}
		}
		if (temp == 0)
			break;
	}
	return (i);
}
