#include "lists.h"
/**
 * pop_listint- delet the head node
 * @head:pointer
 * Return:0 
*/
int pop_listint(listint_t **head)
{

	listint_t *node;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	*node = head;
	data = node->n;
	head = node->next;
	free(node);
	return (data);
}
