#include "holberton.h"

/**
 * _strspn - Write a function that locates a character in a string
 * @s: string
 * @accept: string 2
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, count;

	count = 0;

	for (x = 0; (s[x] != '\0') && (accept[x] != '\0') ; x++)
	{
		if (s[x] == accept[x])
		{
			count++;
		}
	}
	x+=1;
	return (x = x - count);
}
