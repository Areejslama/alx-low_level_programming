#include "lists.h"
/**
 * *get_nodeint_at_index-  returns the nth node
 * @head:pointer
 * @index:int
 * Return:null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int count = 0;

if (head)
{
while (head)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
}
return (NULL);
}
