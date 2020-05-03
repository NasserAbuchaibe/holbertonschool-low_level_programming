#include "lists.h"
/**
 * get_dnodeint_at_index - function that free a dlistint_t list.
 * @head: linked list head
 * @index: index node
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont;
	dlistint_t *aux = NULL;

	if (head == NULL)
		return (NULL);

	aux = head;
	for (cont = 0; aux != NULL; cont++)
	{
		if (cont == index)
			return (aux);
		aux = (*aux).next;
	}
	return (NULL);
}
