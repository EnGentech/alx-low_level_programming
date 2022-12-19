#include "main.h"

/**
 * print_rev - reverse strings
 *
 * @s: reverse string
 */

void print_rev(char *s)
{
	int i, count = 0, x;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			count += 1;
		else
			break;
	}
	for (x = count - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
