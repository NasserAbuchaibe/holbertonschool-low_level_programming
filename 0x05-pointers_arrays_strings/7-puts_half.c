#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - Write a function that prints a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	char aux;
	int  cont = 0, x, y;

	aux = str[0];
	while (aux != '\0')
	{
		cont++;
		aux = str[cont];
	}
		if (cont % 2 != 0)
		{
			x = (cont - 1) / 2;
			for (y = x; y < cont; y++)
			{
			_putchar(str[y]);
			}
		}
		else
		{
			x = cont / 2;
			for (y = x; y < cont; y++)
			{
				_putchar(str[y]);
			}
		}
	_putchar('\n');
}
