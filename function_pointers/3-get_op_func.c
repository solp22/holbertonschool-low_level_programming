#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - get function to perform operation
 * @s: operator
 * Return: Always 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	
	int i;

	while (i < 4)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			printf("%s\n", ops[i].op);
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
