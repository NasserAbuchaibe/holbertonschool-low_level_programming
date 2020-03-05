#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size memory
 * @new_size: new size memory
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *n1;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if ((new_size == 0) && (ptr != NULL))
		return (free(ptr), NULL);
	n1 = malloc(new_size);
	if (n1 == NULL)
		return (NULL);
	n = ptr;
	for (x = 0; x < new_size && x < old_size; x++)
	{
		n1[x] = n[x];
	}
	free(ptr);
	return (n1);
}
