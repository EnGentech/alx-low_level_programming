#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 1, j = 2, fib;
	unsigned long int sum = i + j;
	unsigned long int fi = sum + j;
	unsigned long int new_fib = 0;

	printf("1, 2, 3, 5, ");

	for (fib = 5; fib <= 98; fib++)
	{
		new_fib = fi + sum;
		sum = fi;
		fi = new_fib;

		if (fib == 98)
		{
			printf("%lu", new_fib);
		}
		else
		{
			printf("%lu, ", new_fib);
		}
	}
	putchar('\n');
	return (0);
}
