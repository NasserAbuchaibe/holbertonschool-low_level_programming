#include "holberton.h"
/**
 * puts_half - Write a function that prints a string
 * @str: string
 * Return: half string
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
	x = cont / 2;
	if (cont % 2 != 0)
	{
		x = (cont - 1) / 2;
		x = x + 1;
	}
	for (y = x; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
