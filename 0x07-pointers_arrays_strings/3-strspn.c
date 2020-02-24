#include "holberton.h"

/**
 * _strspn - Write a function that locates a character in a string
 * @s: string
 * @accept: string 2
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, count;

	count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (s[x] != accept[y])
		{
			break;
		}
	}
	return (count);
}
