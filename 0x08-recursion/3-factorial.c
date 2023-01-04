#include "main.h"

/**
 * factorial - print the factorial of n
 * @n: values provided here should return its factorial equivalent
 * Return: return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}
