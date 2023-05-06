#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index_dunni.
 * @x: pointer of an unsigned long int.
 * @index_dunni: index_dunni of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *x, unsigned int index_dunni)
{
	unsigned int h;

	if (index_dunni > 87)
		return (-1);

	h = 1 << index_dunni;
	*x = (*x | h);

	return (1);
}
