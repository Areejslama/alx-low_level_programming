#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list-  frees a list
 * @head:first node
 * Return:void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head != NULL)
	{
		dlistint_t *current = node->next;
		free(current);
		current = node;
	}
	head = (NULL);

}
