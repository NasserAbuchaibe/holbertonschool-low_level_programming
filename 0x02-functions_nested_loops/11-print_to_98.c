#include "holberton.h"
#include <stdio.h>
/**
 * print to 98
 * @n: integer variable
 * Return: n
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
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}
