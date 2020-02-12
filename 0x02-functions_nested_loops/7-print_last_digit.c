#include "holberton.h"

/**
 * print_last_digit - last digit
 * @n: the integer print
 * Return: the variable digit
 */
int print_last_digit(int n)
{
	n = % 10;
	if (n < 0)
	{
		n = (n * (-1));
	}
	_putchar(n + '0');
	return (n); 
}
