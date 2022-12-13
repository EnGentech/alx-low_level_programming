#include <stdio.h>

/**
 * print_to_98 - print all natural numbers within n and 98
 * @n: the values decrement or increment depending on input
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
