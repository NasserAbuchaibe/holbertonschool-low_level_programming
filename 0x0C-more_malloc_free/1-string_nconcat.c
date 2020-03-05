#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenates two strings.
* @s1: pointer string 1
* @s2: pointer string 2
* @n: size
* Return: new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, len1 = 0, len2 = 0;
	char *s3;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2] != '\0')
			len2++;
	}
	if (len2 > n)
		len2 = n;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (s3);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++)
		s3[len1 + j] = s2[j];

	s3[len1 + len2] = '\0';
	return (s3);
}
