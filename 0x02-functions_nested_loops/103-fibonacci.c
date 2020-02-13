#include <stdio.h>
/**
* main - function fibonacci
* Return: 0
*/
int main(void)
{

	unsigned long int x = 1, y = 2, z, w, su = 0;

	for (z = 0; z <= 4000000; z++)
	{
		w = x + y;
		if ((w % 2) == 0)
		su += w;
		x = y;
		y = w;
	}
	printf("%lu\n", su);
	return (0);
}

