#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head list
 * @str: string
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int x,
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
	}
	(*new).len = x;
	(*new).str = strdup(str);
	(*new).next = *head;
	*head = new;
	return (new);
}
