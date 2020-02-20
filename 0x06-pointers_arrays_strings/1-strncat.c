#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (z = 0; z < n; z++)
	{
		dest[x] = src[z];
		x++;
		if (src[z] == '\0')
		{
			break;
		}
	}
	return (dest);
}
