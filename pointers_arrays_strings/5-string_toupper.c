#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string
 * Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; s++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
