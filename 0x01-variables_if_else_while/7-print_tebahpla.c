#include <stdio.h>

/**
 *main - entry point
 *reversing the order of the alphabet
 *Return: Always 0 (Success)
 */

int main(void)
{
char rv_alphabet;
for (rv_alphabet = 'z'; rv_alphabet >= 'a'; rv_alphabet--)
{
putchar(rv_alphabet);
}
putchar('\n');
return (0);
}
