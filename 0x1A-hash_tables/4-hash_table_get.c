#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *hash_table_get- get value of index
 * @ht: the hash table
 * @key:the key value
 * Return:0 Always
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *comp;
	unsigned long int index;
	hash_node_t *new_node;

	if (*key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node)
	{
		comp = new_node->key;
		if (strcmp(comp, key) == 0)
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
