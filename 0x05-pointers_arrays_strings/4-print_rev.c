#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print reverse a string
 * Return: void
 * @s: string
 */

void print_rev(char *s)
{
	char aux;
	int x, y, cont;

	aux = s[0];
	for (x = 0; aux != '\0'; x++)
	{
		aux = s[x];
		cont = x;
	}
	for (y = cont - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
