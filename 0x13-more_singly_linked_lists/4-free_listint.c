#include "lists.h"
/**
 * free_listint- frees a list
 * @head:pointer
 * Return:void
*/
void free_listint(listint_t *head)
{

listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
