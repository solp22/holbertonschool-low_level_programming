#include "main.h"

/**
 * leet - encodes string in leet
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int i, x;
	int let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int num[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; let[i]; i++)
	{
		for (x = 0; s[x]; x++)
		{
			if (s[x] == let[i])
				s[x] = num[i];
		}
	}
	return (s);
}
