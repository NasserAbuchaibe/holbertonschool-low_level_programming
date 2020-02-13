#include "holberton.h"

/**
 * _isupper - compare if a character is uppercase
 * @c: variable int to compare
 * Return: 1 or 0
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
