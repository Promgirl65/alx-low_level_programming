#include "hash_tables.h"

/**
 * hash_table_get - To retrieve the value associated with
 * the key in a hash table
 * @ht: Pointer to hash table
 * @key: key Value
 *
 * Return: Value associated with key in ht, OR
 * NULL, if key cannot be matched with
 * the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
