#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - var func that prints numbers
 * @separator: string with sep between numbers
 * @n: number counter
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		va_end(args);
	}
	printf("\n");
}
