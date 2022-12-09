#include <stdio.h>

/**
 * main - Entry point
 * Hex values
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
