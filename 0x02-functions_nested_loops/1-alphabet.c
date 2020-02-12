#include "holberton.h"

/**
 * 1-alphabet.c - pritns the alphabet
 *@alph: the char to print
 * Return: void
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
