#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - prints hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *node;
  unsigned long int i;
  unsigned char flag = 0;

  if (ht == NULL)
   {
	return;
  }

  printf("{");
  for (i = 0; i < ht->size; ++i)
   {
	node = ht->array[i];

	if (node != NULL)
	{
	  if (flag)
	   {
		printf(", ");
	  }
	  flag = 1;

	  while (node)
	  {
		printf("'%s': '%s'", node->key, node->value);
		if (node->next)
		{
		  printf(", ");
		}
		node = node->next;
	  }
	}
  }
  printf("}\n");
}
