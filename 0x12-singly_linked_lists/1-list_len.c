#include "lists.h"
/**
 * list_len - counts nodes from a linked list
 * @h: inked list head
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
		h = (*h).next;
	return (count);
}
