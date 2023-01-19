#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main entry
 * @n: get the length of the values
 * Return: return the sum values
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list items;

	int sum;
	unsigned int i;

	va_start(items, n);

	for (i = 0; i < n; i++)
		sum += va_arg(items, int);

	va_end(items);

	return (sum);
}
