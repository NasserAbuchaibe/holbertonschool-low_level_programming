#include "lists.h"
/**
 * insert_nodeint_at_index - add node on linked list
 * @head: inked list head
 * @idx: index node to add
 * @n: data to add
 * Return: pointer to new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *aux;
	unsigned int x, y;

	aux = *head;

	for (y = 0; aux != NULL; y++)
	{
		aux = (*aux).next;
	}
	if (idx > y)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}
	if (head == NULL)
		return (NULL);
	tmp = *head;
	for (x = 0; x < idx - 1 && tmp->next; x++)
	{
		tmp = (*tmp).next;
	}
	(*new).next = (*tmp).next;
	(*tmp).next = new;
	return (new);
}
