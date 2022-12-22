#include <stdio.h>

/**
 * main - print the value at array 2
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
