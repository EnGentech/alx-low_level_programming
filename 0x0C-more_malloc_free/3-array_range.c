#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - entry point
 * @min: represent the minimum memory allocation
 * @max: represents the maximum memory allocation
 * Return: return allocated memory
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	j = min;

	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
