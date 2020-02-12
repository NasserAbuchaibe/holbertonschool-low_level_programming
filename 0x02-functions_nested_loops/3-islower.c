#include "holberton.h"

/**
 * _islower - pritns times the alphabet
 *@c: the integer to print
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
