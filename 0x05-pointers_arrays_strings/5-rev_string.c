#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * Return: void
 * @s: string
 */

void rev_string(char *s)
{
	char aux = s[0];
	int x, cont;

	for (x = 0; aux != '\0'; x++)
	{
		aux = s[x];
		cont = x;
	}
	for (x = 0; x <= cont; x++)
	{
		cont--;
		aux = s[x];
		s[x] = s[cont];
		s[cont] = aux;
	}
}
