#include "lists.h"
/**
 * reverse_listint - print linked list
 * @head: inked list head
 * Return: number of node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ant, *prox;

	ant = NULL;
	prox = NULL;
	while (*head != NULL)
	{
		prox = (*head)->next;
		(*head)->next = ant;
		ant = *head;
		*head = prox;
	}
	*head = ant;
	return (*head);
}
