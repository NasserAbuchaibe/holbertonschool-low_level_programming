#include "lists.h"
/**
 * free_listint - print linked list
 * @head: inked list head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while ((*head).next != NULL)
	{
		aux = (*head).next;
		free(head);
		head = aux;
	}
}
