#include "main.h"

/**
 * puts2 - print the values in even notation
 *
 * @str: print in even notation
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		if (str[i] == '\0')
			break;
	else
		_putchar(str[i]);
	_putchar('\n');
}
