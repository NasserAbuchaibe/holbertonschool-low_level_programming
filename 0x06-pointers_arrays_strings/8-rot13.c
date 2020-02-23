#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string into rot13.
 * @c: string to encodes
 * Return: char
 */
char *rot13(char *c)
{
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x, y;


	for (x = 0; c[x] != '\0'; x++)
	{
		y = 0;
		while ((c[x] >= 'a' && c[x] <= 'z') || (c[x] >= 'A' && c[x] <= 'Z'))
		{
			if (c[x] == rot1[y])
			{
				c[x] = rot2[y];
				break;
			}
			y++;
		}
	}
	return (c);
}
