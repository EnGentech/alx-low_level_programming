#include "main.h"

/**
 *_strncpy - copy the values in src into dest
 * @dest: delete your content
 * @src:copy your files into memory
 * @n: shorten the src value
 *Return: return the value in the memory into dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	for (cpy = 0; cpy < n && src[cpy] != '\0'; cpy++)
		dest[cpy] = src[cpy];

	for (; cpy < n; cpy++)
		dest[cpy] = '\0';

	return (dest);
}
