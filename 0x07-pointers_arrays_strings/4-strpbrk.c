#include "holberton.h"

/**
 * _strpbrk - Write a function that locates a character in a string
 * @s: string
 * @accept: string 2
 * Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
