#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alph, x;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
		 _putchar(alph);
		}
	_putchar('\n');
	}
}
