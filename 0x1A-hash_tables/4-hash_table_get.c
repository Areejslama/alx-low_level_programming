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
	char *compare_key;
	unsigned long int index;
	hash_node_t *current_node;

	 if (key == '\0' || key == NULL || ht == NULL)
		return (NULL);
	 index = key_index((const unsigned char *)key, ht->size);
	 current_node = ht->array[index];
	while (current_node)
	{
	compare_key = current_node->key;
	if (strcmp(compare_key, key) == 0)
	{
		return (current_node->value);
	}
	current_node = current_node->next;
	}
	return (NULL);
}
