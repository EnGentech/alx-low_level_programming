#include "main.h"

/**
 * _sqrt_recursion - return the square root of n
 * @n: get the value from user
 * Return: return the square root of users number
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - return root of a number
 * @n: check the number
 * @x: perform squares of a number
 * Return: return the sqares of users number
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
