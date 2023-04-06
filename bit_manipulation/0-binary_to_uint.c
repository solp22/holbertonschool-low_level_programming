#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a strig of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		/*moves each bit to the left ( x 2)*/
		uint = uint << 1;
		/*then adds current bit to convert to decimal*/
		uint = uint + b[i] - '0';
		i++;
	}
	return (uint);
}
