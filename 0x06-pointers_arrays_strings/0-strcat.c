#include "main.h"

/**
 *_strcat - return a concatinated strings of dest and src
 * @dest: increase the memory location to accomodate src
 * @src:append to dest
 *Return: return the value of dest and src to the user
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		;
	}

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
