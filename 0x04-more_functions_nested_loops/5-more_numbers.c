#include "holberton.h"

/**
 * more_numbers - print number 0 to 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		++y;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
