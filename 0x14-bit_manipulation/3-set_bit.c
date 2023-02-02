#include "main.h"

/**
 * set_bit - set a value to bit length
 * @index: get the index of bits
 * @n: bits
 * Return: return new bits
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);

}
