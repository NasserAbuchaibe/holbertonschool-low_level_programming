#include "lists.h"
/**
 * print_dlistint - print linked list
 * @h: inked list head
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cont;

	if (h == NULL)
		return (0);
	for (cont = 0; h != NULL; cont++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (cont);
}
