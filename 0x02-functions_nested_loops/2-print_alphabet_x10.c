#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alph;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
