#include <stdio.h>
#include <stdlib.h>
/**
 * isdigi - check if it is a digit
 *
 * @z: the integer print
 *
 * Return: the variable digit
 */

int isdigi(char *z)
{
	for (; *z != '\0'; z++)
	{
		if (*z < 0 || *z > '9')
		{
			return (0);
		}
	}
	return (1);

}
/**
 * main - sum
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, sum;

	sum = 0;
	if (argc == 0)
	{
		printf("0\n");
	}
	for (x = 1; x < argc ; x++)
	{
		if (isdigi(argv[x]))
			sum += atoi(argv[x]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
