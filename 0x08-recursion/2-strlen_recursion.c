#include "main.h"

/**
 * _strlen_recursion - count the number of strings in s
 * recursively
 * @s: whats your length
 */

int _strlen_recursion(char *s)
{
	unsigned int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		}
	}
