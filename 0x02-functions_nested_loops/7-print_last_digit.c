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
if (val < 0)
val *= -1;

_putchar(val + '0');

return (val);
}
