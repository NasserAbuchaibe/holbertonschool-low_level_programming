#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: string1
 * @height: string2
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int x, y, w;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = malloc(height * sizeof(int *));
	if (z == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		z[x] = malloc(width * sizeof(int));
		if (z[x] == NULL)
		{
			for (w = 0; w <= x; w++)
			{
			free(z[w]);
			}
			free(z);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			z[x][y] = 0;
		}
	}
	return (z);
}
