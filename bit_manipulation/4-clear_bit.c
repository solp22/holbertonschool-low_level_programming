#include "main.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: pointer to binary number
 * @index: position of bit you want to set
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
