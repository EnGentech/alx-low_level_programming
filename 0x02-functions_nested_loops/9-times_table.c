#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int n, mul, ans;

for (n = 0; n <= 9; n++)
{
_putchar('0');

for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');

ans = n * mul;

if (ans <= 9)
_putchar(' ');
else
_putchar((ans / 10) + '0');

_putchar((ans % 10) + '0');
}
_putchar('\n');
}
}
