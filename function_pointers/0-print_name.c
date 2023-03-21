#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: pointer to function
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
