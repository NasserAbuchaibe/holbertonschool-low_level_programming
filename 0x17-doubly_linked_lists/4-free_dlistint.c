#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: linked list head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	if (head == NULL)
		return;

	while (head)
	{
		aux = (*head).next;
		free(head);
		head = aux;
	}
	free(head);
}
