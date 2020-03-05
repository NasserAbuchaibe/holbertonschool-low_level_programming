#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: int
 */
int *array_range(int min, int max)
{
	int x, len, *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < len; x++)
	{
		p[x] = min;
		min++;
	}
	return (p);
}
