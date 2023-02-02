#include "main.h"

/**
 * print_binary
 * @n: get the decimal values
 */

void print_binary(unsigned long int n)
{
	int i, bit = 0;
	unsigned long int wise;

	for (i = 63; i >= 0; i--)
	{
		wise = n >> i;

		if (wise & 1)
		{
			putchar('1');
			bit++;
		}
		else if (bit)
			putchar('0');
	}

	if (!bit)
		_putchar('0');

}
