#include "main.h"

/**
 * puts_half - print half values from input
 *
 * @str: print half of the input
 */

void puts_half(char *str)
{
	int i, count = 0, half = 0;

	for (i = 0; str[i]; i += 1)
		if (str[i] != '\0')
			count += 1;
		else
			break;

	half = count / 2;
	str = str + half;
	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
