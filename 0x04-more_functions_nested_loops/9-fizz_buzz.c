#include <stdio.h>

/**
 * main - fizz_buzz
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int numb;
for (numb = 1; numb <= 100; numb++)
{
if (((numb % 3) == 0) && ((numb % 5) == 0))
printf("FizzBuzz ");
else if ((numb % 5) == 0)
{
if ((numb != 100))
printf("Buzz ");
else
printf("Buzz");
}

else if ((numb % 3) == 0)
printf("Fizz ");
else
printf("%d ", numb);
}
putchar('\n');
return (0);
}
