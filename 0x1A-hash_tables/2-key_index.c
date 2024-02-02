#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index- give index of the key
 * @key:the key value
 * @size:the size of array
 *
 * Return:0 Always
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
