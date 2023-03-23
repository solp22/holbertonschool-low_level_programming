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
	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			if (separator != NULL)
			{
				if (args != NULL)
					printf("%s%s", va_arg(args, char *), separator);
				else
					printf("(nil)%s", separator);
			}
			else
			{
				if (args != NULL)
					printf("%s", va_arg(args, char *));
				else
					printf("(nil)");
			}
		}
		if (va_arg(args, char *) != NULL)
			printf("%s", va_arg(args, char *));
		else
			printf("(nil)");

		va_end(args);
	}
	printf("\n");
}
