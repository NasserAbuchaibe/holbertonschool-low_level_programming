#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function free dog.
 * @d: for free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d);
}
