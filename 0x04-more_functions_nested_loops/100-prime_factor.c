#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 100-prime_factor.c(Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int d;

	for (d = 2; d < n; d++)
	{
		if (n % d == 0)
		{
			while (n % d == 0)
			{
				n /= d;
			}
		}
	}
	printf("%ld\n", d);
	return (0);
}

