#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array to be created
 *
 * Return: a pointer to the newly created hashtable, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int index;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	for (index = 0; index < size; index++)
	{
		hash_table->array[index] = NULL;
	}

	return (hash_table);

}
