#include "main.h"

/**
 * printbinary - prints the binary representation of the code
 * of a number.
 * @b: unsigned long int.
 *
 * Return: no return.
 */
void printbinary(unsigned long int b)
{
	if (b >> 0)
	{
		if (b >> 1)
			printbinary(b >> 1);
		_putchar((b & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

