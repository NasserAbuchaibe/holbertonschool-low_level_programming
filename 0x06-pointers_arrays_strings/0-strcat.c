#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (z = 0; src[z] != '\0'; z++)
	{
		dest[x] = src[z];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
