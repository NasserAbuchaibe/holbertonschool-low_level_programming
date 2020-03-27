#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number int
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, aux = 1;

	x = sizeof(n) * 8;
	if (index > x)
		return (-1);
	aux <<= index;
	if (aux & n)
		return (1);
	else
		return (0);
}
