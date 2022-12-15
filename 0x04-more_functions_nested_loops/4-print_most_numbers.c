#include "main.h"

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int num = 0;
while (num <= 9)
{
_putchar(num + '0');
num++;
if (num == 2 || num == 4)
continue;
}
_putchar('\n');
}
