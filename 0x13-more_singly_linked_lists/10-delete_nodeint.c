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

	aux = *head;

	index -= 1;
	if (*head == NULL || head == NULL)
		return (-1);
	for (cont = 0; cont < index; cont++)
	{
		if ((*aux).next != NULL)
			aux = (*aux).next;
		else
			return (-1);
	}
	if (index == 0)
	{
		auxn = aux;
		*head = (*aux).next;
	}
	else
		auxn = (*aux).next;
	(*aux).next = (*auxn).next;
	free(auxn);
	return (1);
}
