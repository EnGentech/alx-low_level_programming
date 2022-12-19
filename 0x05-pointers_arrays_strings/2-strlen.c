#include "main.h"

/**
 * _strlen - count the number of strings in a given data
 * @s: return the values of string length
 * Return: return the values of string length
 */

int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			count += 1;
		else
			break;
	}
	return (count);
}
