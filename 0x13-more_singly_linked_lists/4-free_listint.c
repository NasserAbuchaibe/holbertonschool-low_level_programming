#include "lists.h"
/**
 * free_listint - print linked list
 * @head: inked list head
 * Return: void
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = (*head).next;
	}
}
