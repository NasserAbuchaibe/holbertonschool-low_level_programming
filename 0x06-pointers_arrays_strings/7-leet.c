#include "holberton.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: string to encodes
 * Return: char
 */
char *leet(char *s)
{
	int x, y;
	int replace[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encoded[] = {'4', '3', '0', '7', '1'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == replace[y])
			{
				s[x] = encoded[y / 2];
				y = 9;
			}
		}
	}
	return (s);
}
