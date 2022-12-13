#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int count;
int lalpha;
for (count = 1; count <= 10; count++)
{
for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
{
_putchar(lalpha);
}
_putchar('\n');
}
}
