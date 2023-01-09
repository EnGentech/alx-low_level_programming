#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1: save the strings
 * @s2: concatenate this strings to s1
 *Return: return the new strings to the user
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, x, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = (char *)malloc((i + j + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	return (ptr);
}
