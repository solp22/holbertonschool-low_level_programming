#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
}
