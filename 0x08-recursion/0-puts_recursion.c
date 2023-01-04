#include "main.h"

/**
 * _puts_recursion - return the strings in the variable s
 * @s: print this strings recursively
 * Return: return the strings in single pairs
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
