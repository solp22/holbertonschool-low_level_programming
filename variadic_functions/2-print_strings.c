#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - var func that prints strings
 * @separator: string that separates strings
 * @n: counter of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i == n - 1 || separator == NULL)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
	}
	printf("\n");

	va_end(args);
}
