#include <stdlib.h>
#include "dog.h"
char *_nd(char *s);
/**
 * new_dog - function that creates a new dog.
 * @name: string
 * @age: float
 * @owner: string
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pt;

	pt = malloc(sizeof(dog_t));
	if (pt == 0)
		return (NULL);
	if (name == 0)
	{
		free(owner);
		free(pt);
		return (NULL);
	}
	if (owner == 0)
	{
		free(name);
		free(pt);
		return (NULL);
	}
	pt->name = _nd(name);
	pt->age = age;
	pt->owner = _nd(owner);
	return (pt);
}

/**
 * _nd - copy str
 * @s: struct
 * Return: char pointer
 */

char *_nd(char *s)
{
	char *aux1, *aux2;
	unsigned int x, cont;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
	}
	aux1 = malloc(sizeof(char) * (cont + 1));
	if (aux1 == NULL)
		return (NULL);
	 aux2 = s;
	for (x = 0; x < cont; x++)
		aux1[x] = aux2[x];
	return (aux1);
}
