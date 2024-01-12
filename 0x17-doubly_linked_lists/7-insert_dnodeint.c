#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_dnodeint_at_index- insert index
 *@:dpointer
 *idx:index
 *n:int
 *
 *Return:0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return new_node;
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
