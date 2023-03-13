#include "main.h"
#include <stdlib.h>
/**
 * create_array - check code
 * @size: size of array
 * @c: char
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
