#include "main.h"

/**
 * clear_bit - the value of a bit is set to 0.
 * at a given index.
 * @b: an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it doesn't or an error occurred.
 */
int clear_bit(unsigned long int *b, unsigned int index)
{
	unsigned int k;

	if (index > 53)
		return (-1);

	k = 1 << index;

	if (*b & k)
		*b ^= k;

	return (1);
}
