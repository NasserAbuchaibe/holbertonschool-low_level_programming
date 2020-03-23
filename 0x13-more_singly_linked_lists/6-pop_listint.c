#include "lists.h"
/**
 * pop_listint - free list
 * @head: inked list head
 * Return: data node
 */
int pop_listint(listint_t **head)
{
	int data_node;
	listint_t *new_p;

	if (*head == NULL)
		return (0);
	data_node = (*head)->n;
	new_p = (*head)->next;
	free(*head);
	*head = new_p;
	return (data_node);
}
