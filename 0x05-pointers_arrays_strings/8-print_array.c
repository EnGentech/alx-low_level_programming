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

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}
