#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value of the hash
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx;
	hash_node_t *tmp;

	if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);

	tmp = ht->array[idx];
	if (tmp == NULL)
		return (NULL);

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}
