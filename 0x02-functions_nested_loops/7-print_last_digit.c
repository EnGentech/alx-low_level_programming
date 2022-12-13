#include "main.h"

/**
 * print_last_digit - entry point
 * Return: Always 0 (Success)
 * @i: return last value
 */

int print_last_digit(int i)
{
int val;
val = i % 10;
if (i < 0)
i *= -1;

_putchar(i + '0');

return (val);
}
