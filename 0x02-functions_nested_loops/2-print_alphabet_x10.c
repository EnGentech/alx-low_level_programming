#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char cnt;
char lalpha;
for (cnt = 'a'; cnt <= 'j'; cnt++)
{
for (lalpha = 'a'; lalpha <= 'z'; lalpha++)
{
_putchar(lalpha);
}
_putchar('\n');
}
}
