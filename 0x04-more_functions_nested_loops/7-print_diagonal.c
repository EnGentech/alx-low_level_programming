#include "main.h"

/**
 * print_diagonal - print a diagonal line using backward slash
 *@n: return diagonal lines accordingly
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int x, y;
if (n > 0)
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
_putchar(' ');

_putchar('\\');
if (x == (n - 1))
continue;
_put('\n');
}
}
_putchar('\n');
}
