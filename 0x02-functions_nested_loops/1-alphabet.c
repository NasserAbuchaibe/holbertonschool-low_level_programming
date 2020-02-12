#include "holberton.h"

/**
 * 1-alphabet.c - pritns the alphabet
 *@alph: the integer to print
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
