#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - states if an intiger is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * REturn: 1 if n is prime, o if not
 */
int actual_prime(int n, int i);
{
	if (i = 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
