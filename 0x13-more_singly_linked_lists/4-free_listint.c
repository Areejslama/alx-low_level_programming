#include "lists.h"
/**
 * free_listint- frees a list
 * @head:pointer
 * Return:void
*/
void free_listint(listint_t *head)
{

listint_t *temp;
listint_t *node = head; 
while (node != NULL)
{
temp = node;
node = node->next;
free (temp);
}
head = NULL;
}
