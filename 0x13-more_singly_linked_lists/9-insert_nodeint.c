#include "lists.h"
/**
 * *insert_nodeint_at_index- insert a new node
 * @head:pointer
 * @idx:int
 * @n:int
 * Return:NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *current = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = (new);
return (new);
}

for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (i < idx - 1)
{
free(new);
return (NULL);
}
new->next = current->next;
current->next = new;
return (new);
}
