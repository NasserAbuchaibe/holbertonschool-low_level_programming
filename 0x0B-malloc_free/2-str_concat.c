#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int x = 1;
	int y = 1;
	int z, w, c;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	c = x + y;
	conc = malloc(sizeof(char) * (c + 1));
	if (conc == NULL)
		return (NULL);
	for (z = 0; s1[z] != '\0'; z++)
		conc[z] = s1[z];
	for (w = 0; s2[w] != '\0'; w++)
	{
		conc[z] = s2[w];
		z++;
	}
	conc[c] = '\0';
	return (conc);
}
