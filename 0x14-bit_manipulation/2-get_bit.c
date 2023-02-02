#include "main.h"

/**
 * get_bit - get the bits
 *@n: bits inputted by users
 * @index: get the index of bits
 * Return: return index of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);

}
