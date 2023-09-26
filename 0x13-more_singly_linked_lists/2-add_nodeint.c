#include "lists.h"
/**
 *  *add_nodeint-  adds a new node at the beginning of a list
 *  @head:pointer
 *  @n:an integer
 *  Return:new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
{
	return (NULL);
}
node->n = n;
node->next = *head;
*head = node;
return (node);
}

