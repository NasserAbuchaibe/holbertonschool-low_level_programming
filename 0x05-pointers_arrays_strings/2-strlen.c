#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - count a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	char aux;
	int  cont = 0;

	aux = s[0];
	while (aux != '\0')
	{
		cont++;
		aux = s[cont];
	}
	return (cont);
}
