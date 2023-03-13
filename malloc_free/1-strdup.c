#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: string
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < i; x++)
		{
			p[x] = str[x];
		}
	}
	return (p);
}
