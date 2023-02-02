#include "main.h"

/**
 * clear_bit - set bits to zero at index
 * @n: get bits
 * @index: set bit to zero
 * Return: return remaining bits
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}
