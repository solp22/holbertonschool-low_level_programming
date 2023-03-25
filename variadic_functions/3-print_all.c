#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints an int
 * @args: argument
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_string - prints a string
 * @args: argument
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_float - prints a float
 * @args: argument
 */

void print_float(va_list args)
{
	float fl;

	fl = va_arg(args, double);
	printf("%f", fl);
}

/**
 * print_char - prints a char
 * @args: argument
 */

void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * print_all - prints all
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, x;
	char *sep = "";

	form_t prints[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[x] != '\0')
	{
		i = 0;
		while (prints[i].f)
		{
			if (prints[i].f[0] == format[x])
			{
				printf("%s", sep);
				sep = ", ";
				(prints[i].func)(args);
			}
			i++;
		}
		x++;
	}
	printf("\n");

	va_end(args);
}
