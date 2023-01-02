#include "main.h"

/**
 * _strpbrk - main function declaration
 * @s:compare values
 * @accept: print matching values
 * Return: allowed values
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0
			while (accept[i] != '\0')
			{
				if (*s == accept[i])
				{
					return (s);
				}
				i++;
			}
		s++;
	}
	return (0);
}
