#include <stdio.h>
/**
 * main - print a name
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

