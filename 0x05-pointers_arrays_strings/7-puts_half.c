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

	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count + 1) / 2;
	for (i = half; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
