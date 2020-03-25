#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: inked list head
 * Return: number of node
 */
listint_t *find_listint_loop(listint_t *head)
{

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (head - (head->next) > 0)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
		head = (*head).next;
	}
	return (head);
}
