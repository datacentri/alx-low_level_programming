#include "main.h"

/**
 * flip_bits - returns the number(b) of bits you would
 * require to flip and get from one number to another
 * @b: number one.
 * @k: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int b, unsigned long int k)
{
	unsigned int bbits;

	for (bbits = 0; b || k; b >>= 1, k >>= 1)
	{
		if ((b & 1) != (k & 1))
			bbits++;
	}

	return (bbits);
}
