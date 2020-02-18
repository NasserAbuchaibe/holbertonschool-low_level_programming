#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Write a function that prints an array
 * @a: array
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
		printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}

	}
	printf("\n");
}
