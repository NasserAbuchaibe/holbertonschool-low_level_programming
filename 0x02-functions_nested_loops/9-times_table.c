#include "holberton.h"
/**
 * times_table - this function prints time table
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, r, tot;

	for (i = 0; i <= 9; i++)
	{
		r = i * 0;

		_putchar((char)('0' + r));
		for (j = 1; j <= 9; j++)
		{
			tot = i * j;

			if (tot > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((char)((tot / 10) + '0'));
				_putchar((char)((tot % 10) + '0'));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((char)(tot + '0'));
			}
		}
		_putchar('\n');

	}
}
