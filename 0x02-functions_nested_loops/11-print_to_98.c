#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet x10
 * @alph: print alphabet
 * @x: loop 10 time
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n !=98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}
