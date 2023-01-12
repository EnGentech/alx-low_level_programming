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
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr = NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		prt[i] = min;
		min++;
	}
	return (ptr);
}
