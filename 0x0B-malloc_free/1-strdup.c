#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - main entry
 * @str: point the pointer here
 * Return: return pointer
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = str[j];
	ptr[i + 1] = '\0';
	return (ptr);
}
