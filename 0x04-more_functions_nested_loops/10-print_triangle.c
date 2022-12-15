#include "main.h"
/**
 *print_triangle - Print a triangular shape in the form of a #tag
 *@size:size as given by user
 *Return:returns nothing
 */
void print_triangle(int size)
{
int db, dd;

if (size > 0)
{
for (db = 1; db <= size; db++)

{
for ((dd = size - db); dd > 0; dd--)
_putchar(' ');

for (dd = 0; dd < db; dd++)
_putchar('#');

if (db == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
