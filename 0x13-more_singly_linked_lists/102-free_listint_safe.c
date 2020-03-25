#include "lists.h"
/**
 * free_listint_safe - free linked list
 * @h: inked list head
 * Return: number of node
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int cont = 0;

	if (*h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		cont++;
		if (*h - ((*h)->next) > 0)
		{
			free(*h);
		}
		else
		{
			free(*h);
			break;
		}
		*h = (*h)->next;
	}
	*h = NULL;
	return (cont);
}
