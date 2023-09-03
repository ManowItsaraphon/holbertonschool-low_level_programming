#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - create a hash node
 * @key: identifier
 * @value: value for
 * Return: head of the hash
 */

hash_node_t *create_node(const char *key, const char *value)
{
	char *d_key, *d_value;
	hash_node_t *new_node;

	d_key = strdup(key);
	if (!d_key)
		return (NULL);

	d_value = strdup(value);
	if (!d_value)
	{
		free(d_key);
		return (NULL);
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(d_key), free(d_value);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->key = d_key;
	new_node->value = d_value;
	return (new_node);
}

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if success or 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp;
	char *d_value;

	if (!ht || !key || !value || !strlen(key) || !ht->array
			|| !ht->size)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			d_value = strdup(value);
			if (!d_value)
				return (0);

			free(tmp->value);
			tmp->value = d_value;
			return (1);
		}
	}

	tmp = create_node(key, value);
	if (!tmp)
		return (0);

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
