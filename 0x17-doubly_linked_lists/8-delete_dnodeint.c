#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer to head list
 * @index: index
 * Return: new list, 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont;
	dlistint_t *aux = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	for (cont = 0; aux->next != NULL; cont++)
	{
		if (cont == index)
		{
			aux->next->prev = aux->prev;
			aux->prev->next = aux->next;
			free(aux);
			return (1);
		}
		aux = aux->next;
	}
	return (-1);
}
