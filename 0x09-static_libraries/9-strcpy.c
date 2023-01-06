#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy the content at src to dest
 * @src: copy this content
 * @dest: paste the content of src here
 * Return: retun the value copied to dest variable
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
