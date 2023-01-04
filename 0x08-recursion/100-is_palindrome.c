#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if the value is palindrome or not
 * @s: check the string if its palindrome
 * Return: return 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
		int len = strlen(s);

		if (len <= 1)
		{
			return (1);
		}
		if (s[0] != s[len - 1])
		{
			return (0);
		}
		return(0);
}
