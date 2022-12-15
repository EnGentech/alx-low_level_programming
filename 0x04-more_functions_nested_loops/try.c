#include <stdio.h>

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
 for (num = 0; num <= 9; num++)
{
 if ((num == 2) || (num == 4))
continue;
 putchar(num + '0');
 
}
 putchar('\n');
}
