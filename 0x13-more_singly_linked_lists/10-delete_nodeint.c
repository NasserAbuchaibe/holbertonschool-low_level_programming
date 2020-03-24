#include "lists.h"
/**
 * delete_nodeint_at_index - delete node on linked list
 * @head: inked list head
 * @index: index node to add
 * Return: pointer to new node or null
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont;
	listint_t *aux, *auxn;

	if (*head != NULL)
	{
		aux = *head;
		auxn = *head;
		if (index == 0)
		{
			aux = (*aux).next;
			free(*head);
			(*head) = aux;
			return (1);
		}
		for (cont = 0; cont < index; cont++)
		{
			if (aux == 0)
				return (-1);
			if (cont < index - 1)
				auxn = (*auxn).next;
			aux = (*aux).next;
		}
		(*auxn).next = (*aux).next;
		free(aux);
		return (1);
	}
	return (-1);
}
