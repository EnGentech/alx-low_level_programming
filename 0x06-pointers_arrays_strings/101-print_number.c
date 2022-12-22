#include "main.h"

/**
 * print_number - return the same number as inputted
 *
 * @n: return same number as inputted
 * Return: same number as entered
 */

void print_number(int n)
{
	unsigned int pnb;

	pnb = n;
	if (n < 0)
	{
		_putchar(45);
		pnb = -n;
	}
	if (pnb / 10)
	{
		print_number(pnb / 10);
	}
		_putchar((pnb % 10) + '0');
}
