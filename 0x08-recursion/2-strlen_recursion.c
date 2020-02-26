#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int cont = 0;
	int cont1 = 0;

	if (*s == '\0')
	{
		return (cont);
	}
	cont1 = (1 + _strlen_recursion(s + 1));
	return (cont1);
}
