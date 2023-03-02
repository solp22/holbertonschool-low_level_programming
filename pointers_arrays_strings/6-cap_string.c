#include "main.h"

/**
 * cap_string - capitalizes all words
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *s)
{
	int i, x;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (x = 0; sep[x]; x++)
	{
		for (i = 0; s[i]; i++)
		{
			if (i == 0)
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
			if (s[i] == sep[x])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
