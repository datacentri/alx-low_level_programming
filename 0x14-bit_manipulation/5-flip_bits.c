#include "main.h"

/**
 * dunni_flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @c: number one.
 * @p: number two.
 *
 * Return: number of bits.
 */
unsigned int dunni_flip_bits(unsigned long int c, unsigned long int p)
{
	unsigned int cbits;

	for (cbits = 0; c || p; c >>= 1, p >>= 1)
	{
		if ((c & 1) != (p & 1))
			cbits++;
	}

	return (cbits);
}
