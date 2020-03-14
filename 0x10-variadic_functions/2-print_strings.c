#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int x;
	char *p;

	va_start(m, n);
		for (x = 0; x < n; x++)
		{
			p = va_arg(m, char *);
			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
			if (x < n - 1)
				printf("%s", separator);
		}
	printf("\n");
	va_end(m);
}
