#include "holberton.h"

/**
 * print_square - print line during n times.
 * @size: integer
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 1;

		while (x <= size)
		{
			int y = 1;

			while (y <= size)
			{
				_putchar('#');
				y++;
			}
			x++;
			_putchar('\n');
		}
	}
}
