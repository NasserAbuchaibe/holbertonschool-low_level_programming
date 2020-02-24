#include "holberton.h"

/**
 * _strchr - Write a function that locates a character in a string
 * @s: string
 * @c: to locate
 * Return: null o pointer
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != c)
		{
			return (s + 1);
		}
	}
	return (0);
}
