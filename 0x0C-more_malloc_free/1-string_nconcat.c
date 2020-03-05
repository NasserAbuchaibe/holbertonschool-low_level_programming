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
		char *m;
		unsigned int len, w, z, x = 1, y = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n >= y)
		len = x + y;
	else
		len = x + n;
	m = malloc(sizeof(char) * (len + 1));
	if (m == NULL)
		return (NULL);
	for (w = 0; s1[w] != '\0'; w++)
	{
		m[w] = s1[w];
	}
	for (z = 0; z <= n; z++)
	{
		m[w] = s2[z];
		w++;
	}
	m[len] = '\0';
	return (m);
}
