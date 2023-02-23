#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 1, j = 2, fib;
	unsigned long sum = i + j;
	unsigned long fi = sum + j;
	unsigned long new_fib = 0;
	unsigned long add_even = j;

	for (fib = 5; fib <= 32; fib++)
	{
		new_fib = fi + sum;
		sum = fi;
		fi = new_fib;

		if (new_fib % 2 == 0)
		{
			add += new_fib;
		}
	}
	printf("%lu\n", add);
	return (0);
}
