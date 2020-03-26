#include "holberton.h"

/**
 * print_binary - print binary
 * @n:  number int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int cont, trig = 1;
	unsigned int limt = sizeof(n) * 8;
	unsigned long int aux;

	for (cont = 0; cont < limt; cont++)
	{
		aux = (n << 1);
		aux >>= 1;
		if (n != aux)
		{
			trig = 0;
			_putchar('1');
		}
		else if (!trig)
			_putchar('0');
		n <<= 1;
	}
	if (trig == 1)
		_putchar('0');
}
