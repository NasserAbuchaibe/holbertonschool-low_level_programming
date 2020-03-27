#include "holberton.h"

/**
 * clear_bit - set bit
 * @n:  number int
 * @index: index to set
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
