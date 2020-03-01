#include <stdio.h>
#include <stdlib.h>
int coins(int x);
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: The number of line arguments
 * @argv: number for calculate
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coins(x));
	}
	return (0);
}
/**
 * coins - calculates the minimum number of coins to make change
 * for an amount of money.
 * @x: number for calculates
 * Return: minimum number of coins to make change
 */

int coins(int x)
{
	int cont;

	for (cont = 0; x != 0; cont++)
	{
		if (x >= 25)
		{
			x -= 25;
		}
		else if (x >= 10)
		{
			x -= 10;
		}
		else if (x >= 5)
		{
			x -= 5;
		}
		else if (x >= 2)
		{
			x -= 2;
		}
		else
		{
			x -= 1;
		}
	}
	return (cont);
}
