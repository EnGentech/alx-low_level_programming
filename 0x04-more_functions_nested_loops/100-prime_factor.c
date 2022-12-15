#include <stdio.h>

/**
 *main- prints the largest prime factor
 *of a number
 *
 *Return: returns 0
 */

int main(void)
{
long n = 612852475143;
int in;
while (in++ < n / 2)
{
if (n % in == 0)
{
n /= 2;
continue;
}
for (in = 3; in < n / 2; in += 2)
{
if (n % in == 0)
n /= in;
}
}
printf("%ld\n", n);
return (0);
}
