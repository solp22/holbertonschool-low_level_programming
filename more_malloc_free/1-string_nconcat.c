#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes from s2 to concatenate
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, y = 0, z, x = 0;

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
	if (n >= x)
	{	n = x; }
	p = malloc(sizeof(char) * i + n + 1);
	if (p == NULL)
	{	return (NULL); }
	else
	{
		if (s1 != NULL)
		{
			for (y = 0; s1[y]; y++)
			{	p[y] = s1[y]; }
		}
		if (s2 != NULL)
		{
			for (z = 0; z < n; z++, y++)
			{	p[y] = s2[z]; }
		}
	p[y] = '\0';
	return (p);
	}
}
