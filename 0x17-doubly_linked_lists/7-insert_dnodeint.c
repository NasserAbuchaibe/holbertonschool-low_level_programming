#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: inked list head
 * @idx: index
 * @n: data new node
 * Return: number of node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont;
	dlistint_t *aux = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL || new == NULL)
		return (NULL);
	(*new).n = n;
	if (idx == 0)
	{
		*h = new,
		(*new).next = NULL;
		(*new).prev = NULL;
		return (new);
	}
	aux = *h;
	for (cont = 0; (*aux).next != NULL; cont++)
	{
		if (cont == idx - 1)
		{
			(*new).next = (*aux).next;
			(*new).prev = aux;
			(*aux).next = new;
			(*new).next->prev = new;
			return (new);
		}
		aux = (*aux).next;
	}
	if (cont == idx)
	{
		(*new).next = NULL;
		(*new).prev = aux;
		(*aux).next = new;
	}
	if (cont < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
