#include "main.h"

/**
 * is_prime_number - return 1 for prime numbers and 0 otherwise
 * @n: check the value for prime number
 * @i: check for prime number
 * Return: return corresponding values respectively
 */

int is_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
	{
		return (0);
	}
	if (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (is_prime_number(n, i + 2));
	}
			return (1);
}
