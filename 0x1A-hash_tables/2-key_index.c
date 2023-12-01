#include "hash_tables.h"

/**
 * key_index - Function that generates an index key,
 * of the given hash.
 * @key: Key to get index.
 *
 * @size: Size of Hash table.
 * Return: key index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}

