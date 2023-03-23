#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic func that sums all parameters
 * @n: numbers
 * Return: ALways 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			sum = sum + x;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
