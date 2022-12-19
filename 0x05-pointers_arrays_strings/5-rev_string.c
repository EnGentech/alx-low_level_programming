#include "main.h"

/**
 * rev_string - reverse strings
 *
 * @s: reverse string
 */

void rev_string(char *s)
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
