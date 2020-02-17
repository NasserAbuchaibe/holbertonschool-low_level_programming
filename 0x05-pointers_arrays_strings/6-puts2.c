#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Write a function that prints a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
