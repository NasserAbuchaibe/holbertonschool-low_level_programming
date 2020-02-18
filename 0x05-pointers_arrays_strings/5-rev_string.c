#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * Return: void
 * @s: string
 */

void rev_string(char *s)
{
	char aux[50];
	int x, y, z, c;

	y = 0;
	z = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		aux[x] = s[x];
		y++;
	}
	for (c = y - 1; c >= 0; c--)
	{

		s[c] = aux[z];
		z++;
	}
}
