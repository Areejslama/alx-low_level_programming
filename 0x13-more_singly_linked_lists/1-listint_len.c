#include "lists.h"
/**
 * listint_len- print length of linked list
 * @h:header
 * Return:length of linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
