#include "holberton.h"

/**
 * print_sign - function that prints the sign of a num.
 * @n: integer.
 * Return: 0 or 1 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
