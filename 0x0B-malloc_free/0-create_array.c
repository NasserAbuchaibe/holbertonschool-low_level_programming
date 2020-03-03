#include "holberton.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int x;

	if (size == 0)
	{
		return (0);
	}
	n = malloc(size * sizeof(c));
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			n[x] = c;
		}
	}
	return (n);
}
