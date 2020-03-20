#include "lists.h"
/**
 * print_list - print linked list
 * @h: inked list head
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		if ((*h).str == NULL)
		{
			printf("[%u] %s\n", (*h).len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
	}
	return (count);
}
