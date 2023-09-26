#include "lists.h"
/**
 * *add_nodeint_end- adds a new node at the end of a list
 * @head:pointer
 * @n:integer
 * Return:new element or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *node;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
	return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
	*head = new;
}
else
{
node = *head;
while (node->next != NULL)
{
node = node->next;
}
node->next = new;
}
return (new);
}
