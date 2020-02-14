#include "holberton.h"

/**
 * print_diagonal - print a line
 * @n: line diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y=1;

	if (n >= 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('\\');
			_putchar('\n');
			
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
