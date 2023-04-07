#include "main.h"

/**
 * get_bit - get value of bit at index position
 * @n: binary number
 * @index: posiiton of bit you want to get
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 0;

	if (index > 63)
		return (-1);

	bit = n >> (index);
	return (bit & 1);
}
