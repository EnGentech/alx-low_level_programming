#include "main.h"

/**
 * strspn - get the length of a prefix substring
 * @s: scan the strings
 * @accept: find the match strings to s
 *Return: return the result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int result = 0;
	char *ptr1, *ptr2;

	ptr1 = s;
	ptr2 = accept;

	i = 0;
	while (ptr1[i] != '\0')
	{
		j = 0;
		while (ptr2[j] != '\0')
		{
			if (ptr2[j] == ptr1[i])
			{
				result++
					break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (result);
}
