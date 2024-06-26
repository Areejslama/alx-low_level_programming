#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_dnodeint_at_index- return node of linked list
 * @index:the index
 * @head:pointer
 *
 * Return:0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (i == index)
{
return (current);
}
else
{
return (NULL);
}
}
