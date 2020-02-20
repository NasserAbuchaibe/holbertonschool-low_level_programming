#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		if (x < n)
		{
			dest[x] = src[x];
		}
	}
	for (; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
