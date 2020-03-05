#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: size str2
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 1, y = 1, z, w, c;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (y > n)
		y = n;
	c = x + y;
	conc = malloc(sizeof(char) * (c + 1));
	if (conc == NULL)
		return (NULL);
	for (z = 0; s1[z] != '\0'; z++)
		conc[z] = s1[z];
	for (w = 0; w < y; w++)
	{
		conc[z] = s2[w];
		z++;
	}
	conc[c] = '\0';
	return (conc);
}
