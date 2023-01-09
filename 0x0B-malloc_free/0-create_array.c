#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - main entry
 * @size: allocate the memory to this size
 * @c: fill the memory with the value of character c
 * Return: return character value
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));
	if ((size == 0) || (ptr == NULL))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
