 #include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: const int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int x;
	int add = 0;

	va_start(m, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (x = 0; x < n; x++)
		{
		add = add + va_arg(m, const unsigned int);
		}
	}
	va_end(m);
	return (add);
}
