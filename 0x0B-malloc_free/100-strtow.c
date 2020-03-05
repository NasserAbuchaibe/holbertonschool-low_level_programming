#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: string
 * Return: 
 */

char **strtow(char *str)
{
	int x, y, z, w = 1, cont = 0, word = 0;
	char **m;

	if ((str == NULL) || (str == ""))
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		if(str[x] != " ")
			cont++;
		if(str[x] == " " && str[x] > 0 && str[x - 1] != " ")
			word++;
	}
	m = malloc(sizeof(char *) * (word + 1));
	if (m == NULL)
		return (NULL);
	for (v = 0; v < cont; v++)
	{
		m[v] = malloc(sizeof(char) * cont
}
	for (x = 0; m[x] < word; x++)
	{
		for (y = 0; str[y] != '\0' && str[y] == " " && str[y - 1])
		{
			for (z = 0; str[z] != '\0'; z++)
			{
				if(str[z] != " " && str[z - w] == " " && str[w + 1] == " ")
					m[x][z] = str[z];
			}
			w++;
		}
	}
	return (m);
}
