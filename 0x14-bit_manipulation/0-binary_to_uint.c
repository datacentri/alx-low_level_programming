#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int hat, basetwo;

	if (!b)
		return (0);

	ui = 0;

	for (hat = 0; b[hat] != '\0'; hat++)
		;

	for (hat--, basetwo = 1; hat >= 0; hat--, basetwo *= 2)
	{
		if (b[hat] != '0' && b[hat] != '1')
		{
			return (0);
		}

		if (b[hat] & 1)
		{
			ui += basetwo;
		}
	}

	return (ui);
}
