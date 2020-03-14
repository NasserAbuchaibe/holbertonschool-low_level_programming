#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int x;

	va_start(m, n);
		for (x = 0; x < n; x++)
		{
			if (separator != NULL)
			{
				printf("%d", va_arg(m, const unsigned int));
				if (x < n - 1)
					printf("%s ", separator);
			}
			if (separator == NULL)
				printf("%d", va_arg(m, const unsigned int));
		}
	printf("\n");
	va_end(m);
}
