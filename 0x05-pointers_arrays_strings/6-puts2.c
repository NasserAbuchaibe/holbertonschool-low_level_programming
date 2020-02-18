#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Write a function that prints a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
