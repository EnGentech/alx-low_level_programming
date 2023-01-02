#include "main.h"

/**
 * _strchr - print from the stated letter
 * @s: store the provided values
 * @c: print values starting from c
 * Return: the value of s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c && s[i] != '\0')
			return (s);
	}
	if (*s == c)
	{
		return (s);
		}
	return (0);
}
