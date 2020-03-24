#include "lists.h"
/**
 * delete_nodeint_at_index - delete node on linked list
 * @head: inked list head
 * @index: index node to add
 * Return: pointer to new node or null
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *aux, *auxn;

	aux = *head;

	index -= 1;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		auxn = (*aux).next;
		free(aux);
		*head = auxn;
		return (1);
	}
	else
	{
		while (aux != NULL)
		{
			if (cont == index)
			{
				auxn = (*aux).next;
				(*aux).next = (*auxn).next;
				free(aux);
				return (1);
			}
			else if ((*aux).next != NULL)
				aux = (*aux).next;
			cont++;
		}
		return (-1);
	}
}
