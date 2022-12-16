#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= 99)
_putchar(' ');
if (k <= 9)
_putchar(' ');
if (k >= 100)
{
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
}
else if (k <= 99 && k >= 10)
{
_putchar((k / 10) + '0');
}
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
}
