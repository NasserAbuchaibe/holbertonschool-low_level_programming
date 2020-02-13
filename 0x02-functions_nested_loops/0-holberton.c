#include "holberton.h"

/**
 * main - pritns Holberton
 * Return: 0
 */
int main(void)
{
	char str[] = "Holberton";
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
	return (0);
}
