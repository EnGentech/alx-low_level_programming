#include <stdio.h>

/**
 *print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
  int i;
  int j;
  int k;
  
  for (i = 0; i <= 9; i++)
    {
      for (j = 0; j <= 9; j++)
	{
	  putchar(j + '0');
	}
      for (k = 10; k <= 14; k++)
	{
	  putchar((k/10) + '0');
	}

  putchar('\n');
}
}
