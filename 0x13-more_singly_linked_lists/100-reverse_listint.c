#include "lists.h"
/**
 *  *reverse_listint-  reverses a list
 *  @head:pointer
 *  Return:0
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;

if (head)
{
while (*head)
{
next = *head;
*head = (*head)->next;
next->next = prev;
prev = next;
}
*head = prev;
return (*head);
}
return (NULL);
}
