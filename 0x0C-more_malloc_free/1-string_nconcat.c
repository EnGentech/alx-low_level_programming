#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - main - entry
 * @s1: take the characters in this memory
 * @s2: concatenate this strings to the s1 variable
 * @n: check for the legnth of the characters in s2
 * Return: return the pointer to the standard output
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, k;
	unsigned int j, count = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		count++;

	ptr = (char *)malloc((k + i + 1) * sizeof(char));
	if (ptr == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	if (n < count)
	{
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	}
	else if (n >= count)
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	return (ptr);
}
