#include "lists.h"
/**
 * get_nodeint_at_index - print linked list
 * @head: inked list head
 * @index: index node
 * Return: data node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 1;

	while (cont <= index)
	{
		if ((*head).next == NULL)
		{
			return (NULL);
		}
		else
		{
			head = (*head).next;
			cont++;
		}
	}
	return (head);
}
