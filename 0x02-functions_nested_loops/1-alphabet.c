#include "holberton.h"

/**
 * 1-alphabet.c - pritns the alphabet
 *@alph: the char to print
 * Return: void
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
