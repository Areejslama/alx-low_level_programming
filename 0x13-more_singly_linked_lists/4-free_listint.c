#include "lists.h"
/**
 * free_listint- frees a list
 * @head:pointer
 * Return:void
*/
void free_listint(listint_t *head)
{

	listint_t *node = head;
	listint_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
