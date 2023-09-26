#include "lists.h"
/**
 * print_listint- print elemnts of the list
 * @h:head
 * Return:number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (head == NULL)
{
printf("Erorr\n");
}
else
{
printf("%d\n",  h->n);
i++;
h = h->next;
}
}
return (i);
}
