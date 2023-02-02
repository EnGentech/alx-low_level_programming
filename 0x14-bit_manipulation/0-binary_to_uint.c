#include "main.h"

/**
 * binary_to_uint - convert values to decimal
 * @b: get the input from user
 *
 * Return: return the converted value to standard output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec = 2 * dec + (b[i] - '0');
	}

	return (dec);
}
