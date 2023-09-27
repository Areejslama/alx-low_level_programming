#include "lists.h"
/**
 * pop_listint- deletes the head node
 * @head:pointer
 * Return:0
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int sum;

if (!head || !*head)
{
return (0);
}
sum = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (sum);
}
