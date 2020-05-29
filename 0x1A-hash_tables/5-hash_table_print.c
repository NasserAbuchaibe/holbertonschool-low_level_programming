#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: pointer to hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *head = NULL;
	int sw = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head)
		{
			if (sw == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			sw = 1;
			head = head->next;
		}
	}
	printf("}\n");
}
