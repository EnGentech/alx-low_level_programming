#include <stdio.h>

/**
 *main - Entry point
 *printing alphatets in lower and upper cases respectively
 *Return: Always 0 (Success)
 */

int main(void)
{
char aA;
for (aA = 'a'; aA <= 'z'; aA++)
putchar(aA);
for (aA = 'A'; aA <= 'Z'; aA++)
{
putchar(aA);
}
putchar('\n');
return (0);
}
