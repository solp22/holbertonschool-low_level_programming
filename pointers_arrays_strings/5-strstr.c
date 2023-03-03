#include "main.h"

/**
 * _strstr - locate substring
 * @haystack: string
 * @needle: substring
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, temp = 0;

	for (i = 0; needle[i]; i++)
	{
	}
	while (*haystack)
	{
		if (*haystack == needle[temp])
			temp++;
		else
			temp = 0;
		if (i == temp)
		{
			if (*haystack == " ")
			{
				haystack++;
			}
			return (haystack - temp);
		}
		haystack++;
	}
	return (NULL);
}
