#include "main.h"

/**
 * _print_rev_recursion - reverse the strings recursively
 * @s: take this strings and reverse then printout
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
