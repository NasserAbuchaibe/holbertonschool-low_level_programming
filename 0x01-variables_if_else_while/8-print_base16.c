#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha, beta;

	for (alpha = '0' ; alpha <= '9' ; alpha++)
	{
		putchar(alpha);
	}
	for (beta = 'a' ; beta <= 'f' ; beta++)
	{
		putchar(beta);
	}
	putchar('\n');
	return (0);
}
