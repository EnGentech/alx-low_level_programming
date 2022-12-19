#include "main.h"

/**
 * _puts - return the strings
 *
 * @str: return strings as inputted
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
