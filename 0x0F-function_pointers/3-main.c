#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculator.
 * @argc: size argv
 * @argv: pointer to string
 * Return: void
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if ((*argv[2] == '/' || *argv[2] == '%') && (n2 == 0))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(argv[2])(n1, n2));
	}
	return (0);
}
