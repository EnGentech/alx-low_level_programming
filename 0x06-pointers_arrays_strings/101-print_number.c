#include "main.h"

/**
 * print_number - return the same number as inputted
 *
 * @n: return same number as inputted
 * Return: same number as entered
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		_putchar((n % 10) + '0');
	}
	else
	_putchar((n % 10) + '0');
}
