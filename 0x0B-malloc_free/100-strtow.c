#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - splits a string into words
 * @str: string
 * Return: 
 */

char **strtow(char *str)
{
	int x, y = 0, z, w = 1, v, cont = 0, word = 0;
	char **m;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		if(str[x] != ' ')
			cont++;
		if(str[x] == ' ' && x > 0 && str[x - 1] != ' ')
			word++;
	}
	m = malloc(sizeof(char *) * (word + 1));
	if (m == NULL)
		return (NULL);
	for (x = 0; x < word; x++)
	{
		for (v = 0; str[v] != '\0'; v++)
		{
			if(str[v] != ' ')
				m[x] = malloc(sizeof(char));
		}
	}
	for (x = 0; x < word; x++)
	{
			for (z = 0; str[z] != '\0'; z++)
			{
					m[x][y] = str[z];
					if (str[z] == ' ' && str[z - 1] != ' ')
					{
						y++;
						break;
					}
					
			}
			w++;
	}
	return (m);
}
