#include "holberton.h"

/**
 * flip_bits - set bit
 * @n:  number int
 * @m: index to set
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux, x;

	aux = n ^ m;

	x = 0;
	while (aux > 0)
	{
		if ((aux & 1) == 1)
			x++;
		aux = aux >> 1;
	}
	return (x);
}
