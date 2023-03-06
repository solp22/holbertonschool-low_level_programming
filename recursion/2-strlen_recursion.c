#include "main.h"

/**
 * _strlen_recursion - get lenght of string in recursion
 * @s: string
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
