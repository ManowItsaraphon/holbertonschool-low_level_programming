#include "hash_tables.h"

/**
 * key_index - give yhe index of a key
 * @key: key to calculate
 * @size: size of the hash table
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
