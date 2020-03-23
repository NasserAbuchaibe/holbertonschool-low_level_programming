#include "lists.h"
/**
 * listint_len - print linked list
 * @h: inked list head
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	unsigned int cont;

	if (h == NULL)
		return (0);
	for (cont = 0; h != NULL; cont++)
	{
		h = (*h).next;
	}
	return (cont);
}
