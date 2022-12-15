#include <stdio.h>

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

int main(int n)
{
  n = 7;
  int line;
  for (line = 1; line <= n; line++)
    {
      if (n <= 0)
	{
	  putchar('\n');
	}
      else
	putchar('_');
    }
}
