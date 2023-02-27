#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: input
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int length, t, i;

	length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		t = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = t;
	}
}

