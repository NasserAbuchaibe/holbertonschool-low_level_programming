#include "lists.h"
/**
 * free_listint2 - free list
 * @head: inked list head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
