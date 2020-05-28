#include "hash_tables.h"

/**
 * hash_table_create - create new hash table
 * @size: size new hash table
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *n_htable = NULL;

	n_htable = malloc(sizeof(hash_table_t));
	if (n_htable == NULL)
		return (NULL);

	n_htable->array = malloc(sizeof(hash_node_t *) * size);
	if (n_htable->array  == NULL)
	{
		free(n_htable);
		n_htable = NULL;
		return (NULL);
	}

	for (index = 0; index < size; index++)
		n_htable->array[index] = NULL;

	n_htable->size = size;
	return (n_htable);
}
