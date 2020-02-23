#include "holberton.h"
#include <stdio.h>
/**
 * print_number - printer numbers
 * @n : integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = 0;

	if (n < 0)
	{
		_putchar('-');
		x = -1 * n;
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
		_putchar(x % 10 + '0');
}
