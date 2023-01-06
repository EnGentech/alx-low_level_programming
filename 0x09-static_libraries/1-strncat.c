#include "main.h"

/**
 *_strncat - return a concatinated strings of
 * dest and src in respect to nth val
 * @dest: increase the memory location to accomodate src
 * @src:append to dest
 * @n: shorten the src value
 *Return: return the value of dest and src to the user
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; j < n ; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}
