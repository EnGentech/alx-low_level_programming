#include "main.h"

/**
 * reverse_array - reverse the order of the nth array
 * @a: reverse the array
 * @n: this should be the length of the array
 */

void reverse_array(int *a, int n)
{
	int i, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		i = a[count];
		a[count++] = a[n];
		a[n--] = i;
	}
}
