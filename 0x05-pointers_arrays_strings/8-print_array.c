#include <stdio.h>
#include "main.h"

/**
 * print_array - print the content in an array as seen
 * @n: the array is defined
 * @a: points to the content of the array n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i < n)
			printf("%d, ", a[i]);
		else if (i == n)
			printf("%d", a[i]);
	}
}
