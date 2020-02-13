#include <stdio.h>


/**
* main - prints the first 50 Fibonacci numbers
* Return: 0
*/


int main(void)
{
	unsigned long int  x, a = 1, c = 2, fibo;

	for (x = 1; x <= 50; ++x)
	{
		if (x != 50)
		{
			printf("%lu, ", a);
			fibo = a + c;
			a = c;
			c = fibo;
		}
		else

		{
			printf("%lu\n", a);
		}
	}
	return (0);
}

