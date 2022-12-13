#include "main.h"

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char put[8] = "_putchar";
int i;
for (i = 0; put[i]; i++)
{
_putchar(put[i]);
}
_putchar('\n');
return (0);
}
