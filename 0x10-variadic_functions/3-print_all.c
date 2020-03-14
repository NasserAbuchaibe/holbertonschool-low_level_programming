#include "variadic_functions.h"

/**
 * print_all - prints anything., followed by a new line.
 * @format: const char const
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *p;
	int x = 0, y = 1;
	va_list m;

	va_start(m, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(m, int));
				break;
			case 'i':
				printf("%d", va_arg(m, int));
				break;
			case 'f':
				printf("%f", va_arg(m, double));
				break;
			case 's':
				p = va_arg(m, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
			default:
				y = 0;
		}
		if (format[x + 1] != 0 && y)
			printf(", ");
		x++;
		y++;
	}
	printf("\n");
	va_end(m);
}
