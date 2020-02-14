#include "holberton.h"

/**
 * print_triangle - Function prints triangle.
 * @size: define number of lines.
 * Return: void.
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1 ; x <= size ; x++)
		{
			for (z = x ; z < size ; z++)
			{
				_putchar(' ');
			}
			for (y = 1 ; y <= x ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
