#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int x, y;
	char *copy;

	x = 0;

	if (str == 0)
	{
		return (0);
	}
	else
	{ 
		while(str[x] != '\0')
		{
			x++;
		}
		copy = malloc((x + 1) * sizeof(str));
		for(y = 0; str[y] != 0; y++)
		{
			copy[y] = str[y];
		}
	return (copy);
	}
}
