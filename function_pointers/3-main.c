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
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		pointer = get_op_func(argv[2]);
		printf("%d\n", pointer(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(99);
}
