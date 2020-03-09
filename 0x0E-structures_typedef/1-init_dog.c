#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct
 * @name: string
 * @age: float
 * @owner: string
 * @d: pointer to struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
