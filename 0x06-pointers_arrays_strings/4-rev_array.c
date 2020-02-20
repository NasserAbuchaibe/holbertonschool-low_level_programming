#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y, z, aux[1000];

	z = 0;
	for (x = 0; x < n; x++)
	{
		aux[x] = a[x];
	}
	for (y = x - 1; y >= 0; y--)
	{
		a[z] = aux[y];
		z++;
	}
}

