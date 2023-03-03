#include "main.h"

/**
 * _strchr - locates character in string
 * @s: stirng
 * @c: character
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return ("NULL");
}
