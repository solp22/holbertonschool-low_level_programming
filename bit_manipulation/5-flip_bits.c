#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip from one to another
 * @n: pointer to binary number
 * @m: pointer to other binary number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int loop;

	for (loop = 63; loop >= 0; loop--)
	{
		if (((n >> loop) & 1) != ((m >> loop) & 1))
			count++;
	}
	return (count);
}

