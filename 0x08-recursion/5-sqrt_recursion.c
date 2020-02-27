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
	int y;

	if (x * x < n)
	{
		return (sqtr1(n, x + 1));
	}
	else if (!(x * x == n))
	{
		y = -1;
	}
	return (y);
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
