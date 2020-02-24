#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @dest: string 1
 * @src: string 2
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
