#include "lists.h"
/**
 * dlistint_len - count dlinked list
 * @h: inked list head
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
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
