#include "lists.h"
/**
 * insert_nodeint_at_index - add node on linked list
 * @head: inked list head
 * @idx: index node to add
 * @n: data to add
 * Return: pointer to new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;
	listint_t *new, *aux;

	aux = *head;

	idx -= 1;
	while (aux != NULL)
	{
		if (cont == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				(*new).n = n;
				(*new).next = (*aux).next;
				(*aux).next = new;
				return (new);
			}
		}
		if (aux != NULL)
			aux = (*aux).next;
		cont++;
	}
	return (NULL);
}
