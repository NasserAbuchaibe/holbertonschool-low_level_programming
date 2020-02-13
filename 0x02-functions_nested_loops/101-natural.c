#include <stdio.h>
/**
* main - function that prints if integer
* Return: 0
*/

int main(void)
{
	int x, su;

	for (x = 0; x <= 1024; x++)
	{
		if ((x % 5 == 0) || (x % 3 == 0))
		{
			su = su + x;
		}
	}
		printf("%d\n", su);
		return (0);
}
