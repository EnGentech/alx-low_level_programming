#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - entry point
 * @nmemb: the array content
 * @size: size of the memory to be allocated
 * Return: return the malloc pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);

	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = 0;

	return (ptr);
}
