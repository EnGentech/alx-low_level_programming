#include "main.h"


/**
 * print_number - entry point
 * @n: print the same value
 */

void print_number(int n)
{
unsigned int val = n;
if (n < 0)
{
_putchar('-');
val = -val;
}
if (val > 9)
{
print_number(val / 10);
}
_putchar(val % 10 + '0');
}
