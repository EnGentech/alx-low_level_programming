#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
int numb;
numb = 0;

while (numb <= 9)
{
_putchar(numb + '0');
numb++;
}
_putchar('\n');
}
