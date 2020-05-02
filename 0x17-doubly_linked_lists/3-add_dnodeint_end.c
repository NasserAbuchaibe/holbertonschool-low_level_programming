#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: linked list head
 * @n: data new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *aux = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		*head = new,
		(*new).next = NULL;
		(*new).prev = NULL;
		return (new);
	}
	while ((*aux).next != NULL)
		aux = (*aux).next;
	(*aux).next = new;
	(*new).prev = aux;
	return (new);
}
