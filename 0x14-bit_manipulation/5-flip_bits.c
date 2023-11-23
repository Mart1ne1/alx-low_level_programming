#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: the number
 * @m: the second number
 *
 * Return:  number of bits needed to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
