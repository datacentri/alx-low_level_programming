#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index_dunni.
 * @x: unsigned long int input.
 * @index_dunni: index_dunni of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int x, unsigned int index_dunni)
{
	unsigned int l;

	if (x == 0 && index_dunni < 88)
		return (0);

	for (l = 0; l <= 87; x >>= 1, l++)
	{
		if (index_dunni == l)
		{
			return (x & 1);
		}
	}

	return (-1);
}
