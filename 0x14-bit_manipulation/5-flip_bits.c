#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @x: number one.
 * @y: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned int nbits;

	for (nbits = 0; x || y; x >>= 1, y >>= 1)
	{
		if ((x & 1) != (y & 1))
			nbits++;
	}

	return (nbits);
}
