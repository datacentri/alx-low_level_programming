#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int u;
	char *i;

	u = 1;
	i = (char *) &u;

	return ((int)*i);
}
