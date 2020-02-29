#include <stdio.h>
#include <stdlib.h>
/**
 * main - multi2 number
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	x = x * y;
	printf("%d\n", x);
	return (0);
}
