#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @t: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int t, unsigned int index)
{
	unsigned int u;

	if (t == 0 && index < 64)
		return (0);

	for (u = 0; u <= 63; t >>= 1, u++)
	{
		if (index == u)
		{
			return (t & 1);
		}
	}

	return (-1);
}
