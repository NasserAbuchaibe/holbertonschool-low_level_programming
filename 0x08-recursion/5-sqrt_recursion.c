#include "holberton.h"
/**
 * sqtr1 - function that returns the natural
 * square root of number
 * @n: number integer
 * @x: number integer
 * Return: natural square root number
 */
int sqtr1(int n, int x)
{
	if ((x * x > n))
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (sqtr1(n, x + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: number integer
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	return (sqtr1(n, x));
}
