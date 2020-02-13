#include "holberton.h"

/**
 * print_line - print a line
 * @n: line size
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n != 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
