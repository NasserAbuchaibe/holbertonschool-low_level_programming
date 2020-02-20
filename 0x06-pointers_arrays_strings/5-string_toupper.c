#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - change to uppercase
 * @u: string
 * Return: char
 */

char *string_toupper(char *u)
{
	int x;

	for (x = 0; u[x] != '\0'; x++)
	{
		if (u[x] >= 'a' && u[x] <= 'z')
		{
			u[x] = u[x] - 32;
		}
	}
	return (u);
}

