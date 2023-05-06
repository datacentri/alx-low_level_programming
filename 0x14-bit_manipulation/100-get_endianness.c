#include "main.h"

/**
 * dunni_get_endiannes_s - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int dunni_get_endiannes_s(void)
{
	unsigned int x;
	char *d;

	x = 1;
	d = (char *) &x;

	return ((int)*d);
}
