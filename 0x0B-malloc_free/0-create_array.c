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

	n = malloc(size * sizeof(c));
	return (n);
}
