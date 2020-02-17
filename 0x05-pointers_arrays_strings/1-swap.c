#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - assign value to a pointer
 * @a: int
 * @b: int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{

	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
