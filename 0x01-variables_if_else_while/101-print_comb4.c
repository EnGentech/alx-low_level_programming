#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, i, z;
for (n = 0; n <= 7; n++)
{
for (i = n + 1; i <= 8; i++)
{
for (z = i + 1; z <= 9; z++)
{
putchar((n % 10) + '0');
putchar((i % 10) + '0');
putchar((z % 10) + '0');
if (n == i || n == z)
continue;
else if (n == 7 && i == 8 && z == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
