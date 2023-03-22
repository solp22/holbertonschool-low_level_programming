#include "3-calc.h"
#include <string.h>
/**
 * main - check code
 * @argc: num of args
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 4)
	{
		if ((strcmp(argv[2], "/") == 0) || ((strcmp(argv[2], "%") == 0) && (atoi(argv[3]) == 0)))
		{
			printf("Error\n");
			exit(100);
		}
		pointer = get_op_func(argv[2]);
		printf("%d\n", pointer(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(99);
}
