#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
