#include "lists.h"
/**
 * print_listint_safe - print linked list
 * @head: inked list head
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int cont = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		cont++;
		if (head - (head->next) > 0)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
		head = (*head).next;
	}
	return (cont);
}
