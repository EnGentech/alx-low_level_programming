#include <stdio.h>

/**
 * main - Entry point
 * Hex values
 * alx programming is deep
 */

int main(void)
{
int n;
char c;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
