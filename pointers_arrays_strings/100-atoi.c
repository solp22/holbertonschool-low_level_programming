#include "main.h"

/**
 * _atoi - convert string to integrer
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int x, n;
	int sign = 1;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == '-')
			sign = sign * -1;
		if ((s[x] >= 48) && (s[x] <= 57))
		{
			n = (n * 10) + s[x] - '0';
		}
		else
			return(0);
	}
	if (sign < 0)
		n = n * -1;

	return(n);
}
