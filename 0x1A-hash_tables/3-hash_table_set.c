#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: Hash table to add or update the key/value
 * @key: The Key to add or update (must not be an empty string)
 * @value: The value associated with the key
 * (must be duplicated and can be empty)
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	usigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);

			if (current_node->value == NULL)
				return (0);
			return (1);
		}

		current_node = current_node->next;
	}

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
