#include "holberton.h"

/**
 * print_alphabet - pritns the alphabet
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
