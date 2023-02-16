#include <stdio.h>

/**
 * main - this program prints combinations of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
		if (ch != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
