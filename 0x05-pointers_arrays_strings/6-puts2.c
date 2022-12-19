#include "main.h"

/**
 * puts2 - print the values in even notation
 *
 * @str: print in even notation
 */

void puts2(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i += 1)
		if (str[i] != '\0')
			count += 1;
		else
			break;
	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
