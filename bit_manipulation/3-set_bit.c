#include "main.h"

/**
 * set_bit - set value of bit to 1 at index
 * @n: pointer to binary number
 * @index: position of bit you want to set
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
