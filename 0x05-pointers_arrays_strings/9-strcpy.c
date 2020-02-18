#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy an array to another array
 * @dest: destination array
 * @src: origin array
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
