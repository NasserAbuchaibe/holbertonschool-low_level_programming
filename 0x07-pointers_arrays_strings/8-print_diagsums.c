#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagsums
 * @a: matirx
 * @size: number int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	y = size;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x][x];
	}
	for (x = 0; x < 0; x++)
	{	
		while (y > 0)
		{
			sum2 = sum2 + a[x][y];
			y--;
		}
	}
	printf("%d, %d", sum1, sum2);
}
