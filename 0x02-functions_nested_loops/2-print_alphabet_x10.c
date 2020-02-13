#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10
 * @alph: print alphabet
 * @x: loop 10 time
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alph;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
	 		_putchar(alph);
		}
		_putchar('\n');
	}
}
