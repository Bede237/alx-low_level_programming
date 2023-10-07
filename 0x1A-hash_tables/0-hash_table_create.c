#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: the size of the hash table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = (hash_node_t **)calloc(new->size, sizeof(hash_node_t *));
	if (new->array == NULL)
		return (NULL);
	for (i = 0; i < new->size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
