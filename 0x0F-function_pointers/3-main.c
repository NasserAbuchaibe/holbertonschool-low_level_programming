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
	int n1, n2, ans;
	int (*ca)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL || argv[1] == '\0' || argv[3] == '\0')
		printf("Error\n");
		exit(99);
	if ((*argv[2] == '/' || *argv[2] == '%') && (n2 == 0))
	{
		printf("error\n");
		exit(100);
	}
	ca = get_op_func(argv[2]);
	ans = ca(n1, n2);
	printf("%d\n", ans);
	return (0);
}
