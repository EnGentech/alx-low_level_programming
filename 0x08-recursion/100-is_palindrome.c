#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if the value is palindrome or not
 * @s: check the string if its palindrome
 * @start: check for the beginning of string
 * @end: check for the ending of string
 * Return: return 1 if true and 0 if false
 */

int is_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome(s, start + 1, end - 1));
}
