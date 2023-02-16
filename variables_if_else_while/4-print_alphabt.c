#include <stdio.h>

/**
 * main - this program prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' | ch != 'q')
			putchar(ch);
		else
			ch++;
	}
	putchar('\n');
	return (0);
}
