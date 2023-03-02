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
	int x;
	unsigned int n = 0;
	int sign = 1;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == '-')
		{
			sign = sign * -1;
		}
		else if ((s[x] >= 48) && (s[x] <= 57))
		{
			n = n * 10 + (s[x] - '0');
		}
		else if (n > 0)
		{
			break;
		}
	}
	return (n * sign);
}
