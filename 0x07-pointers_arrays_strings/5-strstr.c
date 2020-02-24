#include "holberton.h"

/**
 * _strstr - Write a function that locates a character in a string
 * @haystack: string
 * @needle: string 2
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int y, x;

	x = 0;
	
	while (needle[x] != '\0')
		{
			x++;
		}
	while (*haystack)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[y] != needle[y])
			{
				break;
			}
		}
		if (y != x)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return ('\0');
}
