#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: inked list head
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *new, *aux;

	aux = *head;

	if (str == NULL)
		return (NULL);
	aux = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	(*new).len = count;
	(*new).str = strdup(str);
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*aux).next != NULL)
		aux = (*aux).next;
	(*aux).next = new;
	return (new);
}
