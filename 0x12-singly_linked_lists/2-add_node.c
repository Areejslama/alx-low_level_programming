#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_node- adds a new node at the beginning of a list
 *@head:first node
 *@str:a string
 * Return:address or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
		list_t *node;

		if (head != NULL && str != NULL)
		{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
		 *head = node;
	return (node);
		}
	return (0);
}
