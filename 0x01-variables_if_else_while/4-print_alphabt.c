#include <stdio.h>

/**
 *main - Entry point
 *use of tr
 *Return: Always 0 (Success)
 */

int main(void)
{
char no_e_q;
for (no_e_q = 'a'; no_e_q <= 'z'; no_e_q++)
{
if (no_e_q == 'q' || no_e_q == 'e')
{
continue;
}
putchar(no_e_q);
}
putchar('\n');
return (0);
}
