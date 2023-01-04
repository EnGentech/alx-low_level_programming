#include "main.h"

/**
 * _strlen_recursion - count the number of strings in s
 * recursively
 * @s: whats your length
 * Return: print out the length of strings
 */

int _strlen_recursion(char *s)
{

	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
		}
	return (count);
}
