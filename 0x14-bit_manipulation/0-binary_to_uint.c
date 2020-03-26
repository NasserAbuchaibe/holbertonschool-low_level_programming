#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  string binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numd = 0;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		numd <<= 1;
		if (b[x] == '1')
			numd += 1;
	}
	return (numd);
}
