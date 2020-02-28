#include "holberton.h"
/**
 * nprime - function that evaluate if a number is a
 * prime number
 * @n: number integer
 * @x: number integer
 * Return: int
 */
int nprime(int n, int x)
{
	if (x == 2)
	{
		return (1);
	}
	if (x <= 1)
	{
		return (0);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (nprime(n, x - 1));
	}
}

/**
 * is_prime_number - evaluate if a number is a prime number
 * @n: number integer
 * Return: int
 */
int is_prime_number(int n)
{
	int x;

	if (n <= 0)
	{
		return (0);
	}
	else
	{
		x = nprime(n, n - 1);
		return (x);
	}
}
