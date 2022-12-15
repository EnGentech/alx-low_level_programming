include <stdio.h>

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

int main(int n)
{
  n = 7;
  int x, y;
  for (x = 0; x <= n; x++)
    putchar(' ');
  if(x != n)
    putchar('\\');
  putchar('\n');
}
