#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, i;
for (n = 0; n <= 8; n++)
{
for (i = n + 1; i <= 9; i++)
{
putchar((n % 10) + '0');
putchar((i % 10) + '0');
if (n == i)
continue;
else if (n == 8 && i == 9)
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
putchar('\n');
return (0);
}
