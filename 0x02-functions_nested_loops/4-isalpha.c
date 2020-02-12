#include "holberton.h"

/**
 * _isalpha - prints checkks for or uppercase.
 **@c: the integer to print
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
