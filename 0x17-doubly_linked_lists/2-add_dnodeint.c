#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint- adds a new node at the beginning of a list
 *@head:first node
 *@n:a string
 * Return:address or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
		dlistint_t *node;

		if (head != NULL)
		{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->prev = NULL;
		node->next = *head;
		if (*head != NULL)
		{
			(*head)->prev = node;
		}
		 *head = node;
	return (node);
		}
	return (NULL);
}
