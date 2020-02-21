#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @u: string to capitalizes
 * Return: u
 */
char *cap_string(char *u)
{
	int x, y, up;
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',

			 '"', ')', '(', '{', '}'};

	up = 32;

	for (x = 0; u[x] != '\0'; x++)
	{
		if (u[x] >= 97 && u[x] <= 122)
		{
			u[x] = u[x] - up;
		}
		up = 0;
		for (y = 0; y < 12; y++)
		{
			if (u[x] == s[y])
			{
				y = 12;
				up = 32;
			}
		}
	}
	return (u);
}
