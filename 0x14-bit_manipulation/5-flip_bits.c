#include "main.h"

/**
 * flip_bits - exchange 1's to 0's
 * @n: get bits
 * @m: flip with m
 * Return: return fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;


	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			count++;

	}


	return (count);

}
