#include <stdlib.h>
#include "dog.h"
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
	if ((name == 0) || (owner == 0))
	{
		free(owner);
		free(name);
		free(pt);
		return (NULL);
	}
	pt->name = name;
	pt->age = age;
	pt->owner = owner;
	return (pt);
}
