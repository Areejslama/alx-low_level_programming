#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint_end-  adds a new node at the end of a list
 * @head:first node
 * @n:an int
 * Return:element address or null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
dlistint_t *last;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->prev = NULL;
node->next = NULL;
last = *head;
if (last == NULL)
{
	*head = node;
}
else
{
while (last->next != NULL)
last = last->next;
last->next = node;
node->prev = last;
}
return (node);
}
