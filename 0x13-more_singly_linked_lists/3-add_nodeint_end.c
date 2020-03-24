#include "lists.h"
/**
 * add_nodeint_end - print linked list
 * @head: inked list head
 * @n:number
 * Return: pointer to new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(listint_t));
	(*new).n = n;
	(*new).next = NULL;
	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*aux).next != NULL)
	{
		aux = (*aux).next;
	}
	(*aux).next = new;
	return (new);
}
