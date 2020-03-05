#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _calloc - concatenates two strings.
 * @nmemb: number element
 * @size: size type
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *p;
	char *p1;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	p1 = p;
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < (nmemb * size); x++)
		{
			p1[x] = '\0';
		}
	}
	return (p1);
}
