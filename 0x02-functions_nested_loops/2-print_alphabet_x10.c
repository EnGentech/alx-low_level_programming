#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
char j;
i = 1;
while (i <= 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
i++;
_putchar('\n');
}
}
