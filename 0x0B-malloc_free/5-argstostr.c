#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, tam = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			tam++;
	}
	tam = tam + ac;
	s = malloc(sizeof(char) * tam + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		if (s[z] == '\0')
			s[z++] = '\n';
	}
	return (s);
}
