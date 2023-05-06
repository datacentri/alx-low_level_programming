#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index_dunni.
 * @n: pointer of an unsigned long int.
 * @index_dunni: index_dunni of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *x, unsigned int index_dunni)
{
	unsigned int hh;

	if (index_dunni > 63)
		return (-1);

	hh = 1 << index_dunni;
	*x = (*x | hh);

	return (1);
}
