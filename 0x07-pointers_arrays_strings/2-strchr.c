#include "holberton.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: string
 * @c: to locate
 * Return: null o pointer
 */

char *_strchr(char *s, char c)
{

	for ( ; *s != c; s++)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
