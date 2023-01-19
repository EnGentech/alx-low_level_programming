#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - main entry
 * @separator: take the string to separate the integers
 * @n: take the number of arguments to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numb;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, const unsigned int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numb);
}
