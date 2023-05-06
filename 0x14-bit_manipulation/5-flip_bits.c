#include "main.h"

/**
 * dunni_flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @x: number one.
 * @h: number two.
 *
 * Return: number of bits.
 */
unsigned int dunni_flip_bits(unsigned long int x, unsigned long int h)
{
	unsigned int xbits;

	for (xbits = 0; x || h; x >>= 1, h >>= 1)
	{
		if ((x & 1) != (h & 1))
			xbits++;
	}

	return (xbits);
}
