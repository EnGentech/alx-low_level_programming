#include "main.h"

/**
 * swap_int - swap the value of a into b and vice versa
 * @a: swap the value of b into a
 * @b: swap the value of a into b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
