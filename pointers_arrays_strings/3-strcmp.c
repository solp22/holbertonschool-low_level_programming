#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string
 * @s2: another string
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			return (0);
	}
	return (i);
}
