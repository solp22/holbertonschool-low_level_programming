#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, x = 0, y, z, sum;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
		}
	}
	if (s2 != NULL)
	{
		for (x = 0; s2[x]; x++)
		{
		}
	}
	sum = i + x;
	p = malloc(sizeof(char) * sum + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (y = 0; s1[y]; y++)
		{
			p[y] = s1[y];
		}
		for (z = 0; s2[z]; z++, y++)
		{
			p[y] = s2[z];
		}
	return (p);
	}
}
