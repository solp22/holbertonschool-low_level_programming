#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number
 * @argv: array of strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, x, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; argv[i][x]; x++)
			{
				if (isdigit(argv[i][x]))
				{
					sum += atoi(argv[i]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
