#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string into rot13.
 * @c: string to encodes
 * Return: char
 */
char *rot13(char *c)
{
	char rot[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o',
		'C', 'P', 'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R',
		'e', 'r', 'F', 'S', 'f', 's', 'G', 'T', 'g', 't',
		'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W',
		'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y',
		'M', 'Z', 'm', 'z'};
	int x, y, code;

	code = 13;

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y <= 51; y++)
		{
			if (c[x] == rot[y])
			{
				c[x] = c[x] + code;
				y = 51;
			}
			code = code * -1;
		}
	}
	return (c);
}
