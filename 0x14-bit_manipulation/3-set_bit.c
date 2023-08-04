#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @x: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *x, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y  = 1 << index;
	*x = (*x | y);

	return (1);
}
