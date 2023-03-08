#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number
 * @argv: array of strings
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
